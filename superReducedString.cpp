#include <bits/stdc++.h>

using namespace std;

char stck[100];
int topIndex = -1;

void push(char c){
    stck[++topIndex] = c; // -1 + 1 = 0, starts at bottom adds etc
}
void pop(){
    topIndex--; // if top index was 1, now becomes 0. Removes 1th element
}
char top(){
    return stck[topIndex]; // hence the top element also moves down
}
bool empty(){
    return topIndex == -1; // not empty, returns false 
}

int main(){
    char str[101]="";
    std::cin>>str;

    for(int i=0;str[i]!='\0';i++){ // until it reachees the null character 
        if(empty()==true){ // if the stack is empty, add an element
            push(str[i]);
        }else if(str[i]!=top()){ // if the element is NOT same as in stack, add element
            push(str[i]);
        }else{ // if the element in the stack is same as element, pop element in stack (duplicate element)
            pop();
        }
    }

    if(empty()==true){
        std::cout<<"Empty String"<<'\n';
    }else{
        for(int i=0;i<=topIndex;i++){
            std::cout<<stck[i];
        }
    }

    return 0;
}