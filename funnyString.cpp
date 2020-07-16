#include <bits/stdc++.h>

using namespace std;
/*
 compare the absolute difference in the ascii 
 values of the characters at positions 0 and 1, 
 1 and 2 and so on to the end. If the list of 
 absolute differences is the same for both strings, 
 they are funny.
*/
int main() {
    int t;
    char s[10001];
    scanf("%d",&t);
    while(t--)
        {
        scanf("%s",s);
        int i=0,j=strlen(s);
        int d=1;
        for(i=0;i<j-1;i++)
            {
           if(!(abs(s[i+1]-s[i])==abs(s[j-i-1]-s[j-i-2]))) // Front to back, Back to front 
               {
                    d=0;
                   break;
               }         
        }
        if(d==0)
            {
            printf("Not Funny\n");
        }
        else
            {
            printf("Funny\n");
        }          
     }
    return 0;
}
