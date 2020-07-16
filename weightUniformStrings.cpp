#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(){
    std::string str;
    std::cin>>str;

    // holds the weights
    std::set<int> values;

    // unsigned integer type 
    for(size_t i=0,j;i<str.length();i=j){
        char last_char = str[i]; // last character
        int last_weight = 0;

        for(j=i;j<str.length() && str[j]==last_char; ++j){
            // -a, removes everything before and including a. +1, add a back in
            last_weight += str[j] - 'a' + 1;
            values.insert(last_weight);
        }
    }

    int queries; // Number of queries
    int temp; // each query 
    std::cin>>queries;

    while((queries--)>0){
        std::cin>>temp;
        std::cout<<(values.find(temp)==values.end() ? "No":"Yes")<<'\n';
    }

    return 0;
}