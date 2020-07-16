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

void bonAppetit(vector<int> bill, int k, int b) {
    int n = bill.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += bill[i];
    }
    int anna_bill = (sum - bill[k]) / 2; // sum and remove the element
    int anna_change = bill[k] / 2; // what should have been removed, divided by 2 people

    if (anna_bill == b) {
        std::cout << "Bon Appetit";
    }
    else {
        std::cout << anna_change;
    }
}

int main(){
    vector<int>bill;
    bill = { 3, 10, 2, 9 };

    bonAppetit(bill,1,12);

    
    return 0;
}