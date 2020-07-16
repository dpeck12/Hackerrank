#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
array clouds c
energy level e=100

start c[0]

jump size k, to c[(i+k)%n] takes 1 unit energy

If lands on c[i]=1, e-=2 (thundercloud)

Game ends when Aerith lands back on 0


*/


// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int e = 100;
    int start = c[0];
    int n = c.size();

    int i = k%n; // inital jump from 0 
    e -= c[i] * 2 + 1; // initial energy loss 
    while(i!=0){
        i = (i+k)%n;
        e -= c[i] * 2 + 1;
    } 
    return e;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int result = jumpingOnClouds(c, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
