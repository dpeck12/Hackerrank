#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int count = 0;
    std::vector<int> freq(26,0);

    for(auto&c:s)
        ++freq[c-'a'];
    for(auto&f : freq){
        count += f % 2; // should be zero if even number of occurences
    }
    string result;
    if(count<=1){
        result = "YES";
    }else{
        result = "NO";
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
