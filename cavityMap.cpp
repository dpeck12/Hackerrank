#include <bits/stdc++.h>

using namespace std;

// Copies the values of num bytes from the location 
// pointed to by source directly to the memory block 
// pointed to by destination.

// destination, source, number of bytes 

int main(){

    int n;
    //std::cout<<"Enter the order of the map: "<<'\n';
    std::cin>>n;

    char map[n][n+1];

    for(int i=0;i<n;i++){
        std::cin>>map[i]; // input each string 
    }
    char result[n][n+1]; // n+1 because goes from 0

    memcpy(result,map,sizeof(map));

    // map[row][column]

    // key is creating a copy of initial map, 
    // so can keep track of 'X' without altering the map
    // keep track in seperate map

    for(int i=1;i<n-1;i++){ // skips final border row, start and end 
        for(int j=1;j<n-1;j++){
            int key = map[i][j];
            int up = map[i-1][j];
            int down = map[i+1][j];
            int left = map[i][j-1];
            int right = map[i][j+1];

            if(key>up && key>down && key>left && key>right){
                result[i][j]='X';
            }
        }
    }

    for(int i=0;i<n;i++){
        std::cout<<result[i]<<'\n'; // input each string 
    }

    return 0;
}
