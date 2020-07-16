#include <bits/stdc++.h>

using namespace std;

vector<int> v;
bool h[21001];

int main(){
    int n, d;
    std::cin>>n>>d;

    for(int i=0;i<n;i++){
        int num;
        std::cin>>num;
        v.push_back(num);
        h[num]=true; // register number has appeared 
    }

    int count = 0;

    for(int i=0;i<n;i++){
        // check if elements exist at h[v[i]+d] AND h[v[i]+d+d]
        if(h[v[i]+d] && h[v[i]+d+d]){
            count++;
        }
    }
    std::cout<<count<<'\n';
    return 0;
}