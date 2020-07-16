#include <bits/stdc++.h>

using namespace std;

// serve = order + prep
// [[order[i],prep[i]],[order[i],prep[i]]]
// [[order[i],serve[i]]]

// maintain list of pairs (t[i]+d[i],i+1)
// sort by first value, output by second value 

int main(){
    int n;
    std::cin>>n;

    vector<pair<int, int>> x_order;
    // std::pair is a class template that provides 
    // a way to store two heterogeneous objects as a 
    // single unit. A pair is a specific case of a 
    // std::tuple with two elements.

    for(int i=0;i<n;i++){
        int order, prep;
        std::cin>>order>>prep;
        // i+1 as it starts iterating from 0
        x_order.push_back({order+prep,i+1}); // magic
    }
    
    sort(x_order.begin(),x_order.end());
    for(int i=0;i<n;i++){
        std::cout<<x_order[i].second<<" "; // print the second element
    }
    return 0;
}