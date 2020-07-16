#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int main() 
{
    int n,k,max,ans;
    scanf("%d", &n);
    int a[n],h[6]={0}; // h tracks multiples 
    for(k = 0; k < n; k++)
    {
        scanf("%d",&a[k]);
        h[a[k]]++;
    }
    max=h[1];
    for(k = 2; k < 6; k++)
    {
        if(max<h[k])
        {
            max=h[k];
            ans=k;
        }
   }
   printf("%d",ans);
   return 0;
}