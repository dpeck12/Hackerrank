/*
verse number of topics

must determine max number of topics
a 2person team can know

print max number of topics (2 person team can know)
Number ways to form a 2-person team, knows max no. topics
*/
#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

string ar[1000];

int maxTopic(){
    int countTopic;
    int mx = 0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){ // iterate through rest of the array
            countTopic=0;
            for(int k=0;k<m;k++){ // iterate over each element
                // in current element OR subsequent element 
                if(ar[i][k]=='1' || ar[j][k]=='1'){ // check for a 1
                    countTopic++;
                }   
                mx = max(mx, countTopic); // if not topic exists, will return 0
            }
        }
    }
    return mx; // return the max element 
}

int maxTeam(int maxTopic){
    int countTeam = 0, mx = 0;
    for(int i=0;i<n-1;i++){ // start element
        for(int j=i+1;j<n;j++){ // iterate through the rest of the elements
            countTeam=0;
            for(int k=0;k<m;k++){ // m is the length of subjects 
                if(ar[i][k]=='1' || ar[j][k]=='1'){
                    countTeam++;
                }
            }
            mx+=(countTeam==maxTopic)?1:0;
        }
    }
    return mx;
}

int main(){
    int  mxTopic = 0, mxTeam = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> ar[i];
    cout << maxTopic() << endl;
    cout << maxTeam(maxTopic()) << endl;
    return 0;
}