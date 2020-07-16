#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    int N;
    std::cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    int Q, val;
    std::cin >> Q;
    // next smallest number just greater than that number
    for (int i = 0; i < Q; i++) {
        std::cin >> val;

        // ITERATOR
        // An iterator is any object that, pointing to some 
        // element in a range of elements(array), has the 
        // ability to iterate through the elements of that 
        // range using a set of operators

        // LOWER_BOUND()
        // The lower_bound() method in C++ is used to return an 
        // iterator pointing to the first element in the range[first, last) 
        // which has a value not less than val.


        vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), val);

        if (arr[low - arr.begin()] == val)
            std::cout << "Yes " << (low - arr.begin() + 1) << '\n';
        else
            std::cout << "No " << (low - arr.begin() + 1) << '\n';
    }
    return 0;
}

