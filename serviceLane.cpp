#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    std::cin>>n>>t;
    vector<int> width(n);
    for(int i=0;i<n;i++){
        std::cin>>width[i];
    }

    for(int a0 =0; a0<t; a0++){
        int i, j;
        std::cin>>i>>j;
        int pass = INT_MAX;
        for(int l = i;l<=j;l++){
            if(width[l]<=pass) pass = width[l];
        }
        std::cout<<pass<<'\n';
    }
    return 0;
}
