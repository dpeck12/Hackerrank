#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool a, b, c, d;
    a=b=c=d=false;
    int k=0;

    int result;

    for(int i=0;i<n;i++){
        if(isdigit(password[i])){
            a = true;
        }
        else if(isupper(password[i])){
            b = true;
        }
        else if(islower(password[i])){
            c = true;
        }
        else if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+'){
            d = true;
        }
    }
    if(!a)++k;
    if(!b)++k;
    if(!c)++k;
    if(!d)++k;

    if(n<6){
        result = max(6-n,k);
    }else{
        result = k;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
