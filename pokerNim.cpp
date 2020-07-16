#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T > 0) {
        int n, k;
        int nimSum, tmp;
        cin>>n>>k>>nimSum;
        for(int i = 1; i < n; i++) {
            cin>>tmp;
            nimSum ^= tmp;
        }
        if(nimSum != 0) {
            cout<<"First\n";
        } else {
            cout<<"Second\n";
        }
        T--;
    }
    return 0;
}
