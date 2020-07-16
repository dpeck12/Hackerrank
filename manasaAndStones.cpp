// n, number of stones 
// a OR b, difference
// OUTPUT: list of possible values for the last stone #

// if a = b, (n-1)*a for last stone 

// Coefficients of a and b, ca and cb. ca + cb = i-1 (ith stone)

// To find possible values of nth stone 
// c_a * a + c_b * b s.t. c_a + c_b = n - 1

#include <bits/stdc++.h>

using namespace std;

int main(){

    int T;
    std::cin>>T;

    while(T--){
        long long a,b,n; // a OR b difference, n number of stones
        long long int c, d;
        
        set<int>x;

        // a is max value, b is min v   alue 
        std::cin>>n;
        std::cin>>c;
        std::cin>>d;

        a = max(c,d); // max value
        b = min(c,d); // min value 

        for(int i=0;i<n;i++){
            x.insert(i*b + (n-1-i)*a);

            // (i*b + (n-1-i)*a) IS THE KEY!
        }

        for(auto it=x.begin();it != x.end(); it++){
            std::cout<<*it<<" ";
        }
        std::cout<<endl;
    }
    return 0;
}
