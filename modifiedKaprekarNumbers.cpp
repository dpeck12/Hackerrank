/*
ower limit integer
upper limit integer 


positive whole number n, d digits

square n

either 2*d digits long 
or (2*d)-1 digits long 

split into left (l) and right (r) parts
r must be d digits long 

left is the remaining substring 

convert substrings to integers
add together, equal ton?
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    bool flag = false;
    
    for(int i=p;i<=q;i++){
        string s = to_string((long)i*(long)i);
        long sub = s.size()/2;

        // atoi, converts string to integer 
        // substr, creates a substring given two indexes
        // A pointer to the c-string representation of the string object's value.
        int x = atoi(s.substr(0,sub).c_str()) + atoi(s.substr(sub,s.size()).c_str());

        if(!flag && x==i) flag = true;

        if(x==i)std::cout<<i<<" ";
    }
    if(!flag) std::cout<<"INVALID RANGE"<<'\n';
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
