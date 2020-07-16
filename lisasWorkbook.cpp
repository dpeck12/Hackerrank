#include <bits/stdc++.h>

using namespace std;

// FIND IF PROBLEM IS SPECIAL
// index within chapter, same a page number 

int main(){
    int n; // n = # of pages
    int k; // maximum number of problems per page
    std::cin>>n>>k;

    int numProblems, specialProblems=0, pageNumber=0;

    for(int i=0;i<n;i++){
        std::cin>>numProblems; // Number of problems in the chapter 
        pageNumber++; // Increase for new chapter 
        
        int problem = 1;
        while(numProblems>0){
            numProblems--; // dealt with one of the problems
            
            // check if a special problem
            if(problem==pageNumber){
                specialProblems++;
            }
            // problem%k==0, no remainder, all problems can fit on page
            // numProblems!=0, if wasn't true, no need to go to next page
            if(problem%k==0 && numProblems!=0){
                pageNumber++; // incerase for full page 
            }
            problem++; // move onto next problem
        }
    }
    std::cout<<specialProblems;

    return 0;
}
/*
n chapers, 1 to n

ith chapter, arr[i] problems, numbered 1 to arr[i]
Each page can hold k problems
Only chapters last page can hold <k problems
New chapter, new page
Page number indexing starts at 1

arr[1]=4 problems, chapter one 
arr[2]=2 problems, chapter two

Each page can hold k=3 problems
*/