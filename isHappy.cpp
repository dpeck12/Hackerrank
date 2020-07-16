#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string s) {
    const int N = 400;
    int cnt[N];

    int n = s.length();

    int cnt_ = 0, cnt_ch = 0, i = 0;
        bool isHappy = false;
        for(int i = 0; i < n; i++){
            if(s[i] == '_')
                ++ cnt_;
            else
                ++ cnt_ch;
        }
        if(cnt_ == n){
            isHappy = true;
        }else if(cnt_ch == n){
            for(i = 0; i < n; ++ i){
                if((i > 0 && s[i - 1] == s[i]) || (i < n - 1 && s[i + 1] == s[i]))
                    continue;
                break;
            }
            isHappy = i >= n;
        }else{
            memset(cnt, 0, sizeof(cnt));
            for(i = 0; i < n; ++i)
                ++cnt[s[i] - 'A'];
            for(i = 0; i < 26; ++i){
                if(cnt[i] == 1)
                    break;
            }
            isHappy = i >= 26;
        }
        string result;
        if(isHappy)
            result = "YES";
        else
            result = "NO";
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
