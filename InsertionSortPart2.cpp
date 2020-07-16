#include <bits/stdc++.h>

using namespace std;

int ar[1000];

int main(){
    int s;
    std::cin>>s;
    for(int i=0;i<s;i++){
        std::cin>>ar[i];
    }
    for(int i=1;i<s;i++){ // Iterate from next element
        int idx = i, val = ar[i]; // val = next element
        for(int j=0;j<i;j++){ // Iterate from current element
            if(val<ar[j]){ // If next element is less than current element
                idx = j; // set idx to current element
                break;
            }
        }
        for(int j=i;j>idx;j--) // start from next element, iterate backwards to current element
            ar[j]=ar[j-1]; // Set next element equal to current element (switch them)
        ar[idx]=val; // set next element equal to current element
        for(int j=0;j<s;j++){
            std::cout<<ar[j]<<" ";
        }
        std::cout<<endl;
    }


}


