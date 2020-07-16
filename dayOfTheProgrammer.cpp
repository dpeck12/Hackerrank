#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string result;
    if(year==1918){ // transition
        result = "26.09.1918";
    }else if((year <= 1917) && (year%4 == 0)){
        result = "12.09."+to_string(year);
    }
    else if((year > 1918) && (year%400 == 0 || ((year%4 == 0) && (year%100 != 0)))){
        // result = name + std::to_string(age);
        result = "12.09."+to_string(year);
    }
    else{
        result = "13.09."+to_string(year);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
/*
1700,2700
want 256th day

1700 to 1917 -> Julian
leap year, divisible by 4
29days

1919 -> Gregorian
leap year,divisible by 400, by 4, NOT by 100
29days 

1918
45th day is the 32nd day (-13)

Jan - 31
Feb - 
March - 31
April - 30
May - 31
June - 30
July - 31
August - 31 
September - 30
October - 31
November - 30
December  - 31

Only have to worry about transition year, 1918
*/