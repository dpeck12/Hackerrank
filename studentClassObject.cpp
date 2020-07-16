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

class Student {
private:
    int scores[5];
    int sum;
public:
    Student() :sum(0) {} // not sure 
    int calculateTotalScore() { return sum; }
    void input() {
        for (int i = 0; i < 5; i++) {
            std::cin >> scores[i]; // reading in vales 
            sum += scores[i]; // cumulative sum
        }
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}

