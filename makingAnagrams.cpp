#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int main(){
    string str1, str2;
    int len1, len2, count=0, alphaA[26]={0},alphaB[26]={0};

    std::cin>>str1;
    std::cin>>str2;

    len1 = str1.size();
    len2 = str2.size();

    for(int i=0;i<len1;i++)alphaA[str1[i]-97]++;
    for(int i=0;i<len2;i++)alphaB[str2[i]-97]++;
    for(int i=0;i<26;i++)count+=abs(alphaA[i]-alphaB[i]);

    std::cout<<count<<endl;

    return 0;
}


// VERY ANNOYING!
