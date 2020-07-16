#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    string str = "hackerrank";

    string result;

    if(s.length()<str.length()){
        result = "NO";
    }
    int j=0;
    // iterate through string, for each letter iterate through s and see if the letter exists
    for(int i=0;i<s.length();i++){ // iterate over the string 
        if(j<str.length() && s.at(i)==str.at(j)){
            j++; // if the list does exist, iterate j
        }
    }
    return (j==str.length()?"YES":"NO"); // if all letters were found, j length should equal str length
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
