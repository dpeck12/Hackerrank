#include <bits/stdc++.h>

using namespace std;

void insertionSort(int N, int arr[]){
    int i, j, value;

    int shifted = 0;

    for(int i=1;i<N;i++){ // first value at i=0 is sorted 
        value = arr[i]; // set value equal to current element 
        j = i - 1; // set j = index of previous element 

        while(j>=0 && value<arr[j]){ // while current element is less than previous element
        arr[j+1]=arr[j]; // next element is equal to current element 
        j--; // iterate backwards 
        shifted++; // add to the count 

        } 
        arr[j+1]=value; // j+1 because j is decremented on last run of while loop
    }
    std::cout<<shifted<<'\n';
}

int main(){
    int N;
    cin >> N;
    int arr[N], i;
    for(i = 0; i < N; i++) {
        cin >> arr[i];
    }

    insertionSort(N, arr);
}
