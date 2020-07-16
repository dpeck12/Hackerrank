#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    std::cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    int temp;
    vector<int> result;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i+1){
                temp=j+1;
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j]==temp){
                result.push_back(j+1);
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<result[i]<<'\n';
    }
}
