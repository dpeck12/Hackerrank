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
#include <cassert>
#include <cstdio>

using namespace std;    

int reverse(int n) {
    int reverse = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    while (i <= j) {
        int result;
        result = abs(i - reverse(i)) % k;
        if (result == 0)
            count++;
        i++;
    }
    return count;
}

int main(){

    
    
    return 0;
}


