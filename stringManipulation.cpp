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

/*
Two strings, on new lines, a and b 
First line: lenght of a AND length of b
Second line: concatentate a + b 
Third line: print two strings seperated by space, first character swapped
*/

int main() {
    string str1, str2;
    std::cin >> str1;
    std::cin >> str2;
    std::cout << str1.length() << " " << str2.length() << '\n';
    std::cout << str1 + str2 << '\n';
    char temp;
    temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
    std::cout << str1 << " " << str2;
    
    return 0;
}

