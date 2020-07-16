#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    std::cin>>n;

    int a[n];
    for(int i=0;i<n;i++)std::cin>>a[i];

    sort(a,a+n);

    int diff[n]; // Difference array, keeps track of the difference between elements

    adjacent_difference(a,a+n,diff);

    // size of array of differences, will be 1 less than array of numbers
    int min = *min_element(diff+1,diff+n);

    // ascending order, 
    for(int i=1;i<n;i++){
        if(diff[i]==min)std::cout<<a[i-1]<<" "<<a[i]<<" ";
    }

}
