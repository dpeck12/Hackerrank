#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    std::cin>>N;

    vector<int> B(N);

    for(int i=0;i<N;i++){
        std::cin>>B[i];
    }

    int bread_given = 0;

    for(int i=0;i<N-1;i++){

        if(B[i]%2!=0){ // is odd
            // give loaf of bread to each person i and i+1
            B[i]++; // for clarity 
            B[i+1]++;
            bread_given+=2;
        }
    }
    
    if(B[N-1]%2==0){
        std::cout<<bread_given;
    }else{
        std::cout<<"NO";
    }
    
    return 0;
}
