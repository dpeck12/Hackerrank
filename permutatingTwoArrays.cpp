#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[1000], B[1000];

int main(){
    int T, n, k;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&k);

        for(int i=0;i<n;i++)
            scanf("%d",&A[i]);

        for(int i=0;i<n;i++)
            scanf("%d",&B[i]);

        // sort(Array, Array + arraySIZE);
        // sort A, ascending 
        sort(A, A+n);

        // sort B, descending 
        sort(B,B+n,greater<int>());

        int flag = 1; // keep track

        for(int i=0;i<n;i++)
            if(A[i]+B[i]<k){
                flag=0;
                break;
            }
        printf("%s\n",flag?"YES":"NO");
    }
    return 0;
}