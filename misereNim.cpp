#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T;
    std::cin>>T;
    
    while(T>0){
        int N;
        std::cin>>N; // size of array

        bool isGreaterThanOne = false;

        int *pile = new int[N]; // new array
        // pile[i] = # of stones at pile i

        for(int i=0;i<N;i++){
            std::cin>>pile[i]; // input the value of pile
            if(pile[i]>1){
                isGreaterThanOne = true;
            }
        }

        // check for edge cases
        if(!isGreaterThanOne){ // if pile is NOT greater than one  
        // NOT talking about how many stones in each piles
        // talking about the number of piles 
            if(N%2==0){ // if even number of piles 
                std::cout<<"First\n";
            }else{
                std::cout<<"Second\n";
            }
            T--; // decrement test cases
            continue;
        }
        // No edge case, so misere nim is the same as standard nim
        int nimSum = pile[0];
        for(int i=1;i<N;i++){
            nimSum^=pile[i];
        }
        if(nimSum!=0){
            std::cout<<"First\n";
        }else{
            std::cout<<"Second\n";
        }
        T--;
    }
    return 0;
}