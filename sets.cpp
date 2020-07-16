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
#include <set>

using namespace std;

// Sets are a type of associative containers 
// in which each element has to be unique, 
// because the value of the element identifies it. 
// The value of the element cannot be modified once 
// it is added to the set, though it is possible to 
// remove and add the modified value of that element.

int main() {
    int iCount;

    set<int> ss;

    std::cin >> iCount;

    for (int i = 0; i < iCount; i++) {
        int type, query;
        std::cin >> type >> query;
        switch (type) {
        case 1:
            ss.insert(query);
            break;
        case 2:
            ss.erase(query);
            break;
        case 3:
            std::cout << (ss.find(query) == ss.end() ? "No" : "Yes") << '\n'; // True -> "No"
            break;
        }
    }

    return 0;
}
