#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int letters[26]={0};

    for(int i=0;i<s1.length();i++){
        char c = s1[i];
        letters[c-'a']++;
    }
    string res = "NO";
    
    for(int i=0;i<s2.length();i++){
        if(letters[s2[i]-'a']!=0){
            res = "YES";
            break;
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
