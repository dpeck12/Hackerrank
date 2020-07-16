#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int result;
    if(s.length()%2==1){
        result=-1; // clever 
    }else{
        int letters[26]={0};
        int count = 0;

        for(int i=0;i<s.length()/2;i++){
            char c = s[i];
            letters[c-'a']++; // increment 
        }
        for(int i=s.length()/2;i<s.length();i++){
            char c = s[i];
            letters[c-'a']--; // decrement 
        }
        for(int i=0;i<26;i++){
            count+=abs(letters[i]); // should be 0, if an ANAGRAM
        }
        count/=2;
        result = count;
    }
    // count keeps track of changes is in FIRST and SECOND half, so double the changes
    // need to half it!
    // either change first half to second half
    // or change second half to first half 
    return result;

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

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
