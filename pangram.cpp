#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int alphabetTab = 0;
    int alphabet[26];
    int flag = 0;

    for(int i=0;i<26;i++){
        alphabet[i]=0; // populate the array with 0's
    }

    for(int i=0;i<s.length();i++){
        int insertNum = (tolower(s[i])-'a'); // index of the letter
        if(insertNum<0 || insertNum>25){
            // The continue statement breaks one iteration (in the loop), 
            // if a specified condition occurs, and continues with the next 
            // iteration in the loop.
            continue;
        }
        if(alphabet[insertNum]==0){
            alphabetTab++; // how many letters have occured 
        }
        if(alphabetTab>=26){
            flag = 1; // True 
            break; // Stop iterating 
        }else{
            alphabet[insertNum]++; // letter exists
        }
    }
    string result;
    if(flag){
        result = "pangram";
    }else{
        result = "not pangram";
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
