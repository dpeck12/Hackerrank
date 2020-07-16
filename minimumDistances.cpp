#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ar[1005], mn = INT_MAX;

    bool flag = false;

    std::cin>>n;
    for(int i=0;i<n;i++) std::cin>>ar[i]; // populate the array
    for(int i=0;i<n;i++){ // iterate from start element
        for(int j=i+1;j<n;j++){ // iterate from next element and onwards 
            if(ar[i]==ar[j]){ // two elements in the list are equal
                if(abs(i-j)<mn)mn=abs(i-j); // index distance between the two
                flag=true; // Set flag=true, does exist duplicate elements
                break;
            }
        }
    }
    if(!flag)mn=-1; // if flag is false, does NOT exist duplicate elements, print -1 
    std::cout<<mn<<'\n';

    return 0;
}