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

vector<int> parseInts(string str) {
    vector<int>arr;
    
    std::stringstream ss(str);

    for (int i; ss >> i;) {
        arr.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    return arr;
}


int main() {
    string str = "23,4,56";
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

