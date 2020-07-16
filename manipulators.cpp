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
#include <istream>
#include <string>
#include <set>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        double A, B, C;
        std::cin >> A >> B >> C;
        // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long)A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part
    }

    return 0;
}

