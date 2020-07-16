#include <bits/stdc++.h>

using namespace std;

map<int,int> mp;

void solve(vector<int>arr,int money){
    int n = arr.size();
    int ans1=-1, ans2=-1;
    for(int i=0;i<n;i++){
        int v1 = arr[i], v2 = money - v1;
        if(v1!=v2){
            // if both elements are present in the map
            if(mp.count(v1)&&mp.count(v2)){
                ans1=v1;
                ans2=v2;
                break;
            }
        }else{
            // v1 = arr[i]
            // count of element must be greater than 1 if they are same 
            if(mp[v1]>1){
                ans1=v1;
                ans2=v1;
                break;
            }    
        }
    }
        set<int>s;
        for(int i=0;i<n;i++){
            if(arr[i]==ans1 || arr[i]==ans2)
                s.insert(i);
        }
        // index starts from 0
        for(int it:s)
            std::cout<<it+1<<" ";
        std::cout<<'\n';

}

int main(){
    int t;
    std::cin>>t;
    
    while(t--){
        mp.clear();
        int n, money;
        std::cin>>money>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
            // hash occurence of each ammount, with its frequency
            mp[arr[i]]++;
        }
        solve(arr,money);
    }
    return 0;
}