/*
Luck balance = 0

L[i] amount of luck
WIN, luck decrease by L[i]
LOSE, luck increase by L[i]

T[i] importance
T[i] = 1, important
T[i] = 2, unimportant 

loses <=k IMPORTANT contests, maximum amount of luck

contest        L[i]    T[i]
1		5	1
2		1	1
3		4	0
k=2
Loses all contests, luck=5+1+4=10

Allowed to lose

Choose to win lowest value important contest

luck = 5 + 4 - 1 = 8

MAXIMISE LUCK, LUCK OBTAINED BY LOSING
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K, L, T;
    
    std::cin>>N>>K;

    int luck = 0;

    vector<int> contest;

    for(int i=0;i<N;i++){
        std::cin>>L>>T;
        if(T==0){
            // Lose all unimportant contest 
            luck+=L; 
        }else{
            // add the important competitions to an array
            contest.push_back(L);
        }
    }
    // sort important contests, descending order 
    sort(contest.rbegin(),contest.rend());

    while(K>0 && contest.size()>0){
        // Lose as many of the largest contests as possible
        luck+=contest[0];
        contest.erase(contest.begin()); // add it, get rid of it
        K--;
        // reduce size of vector, reduce value of K
    }
    // have to win the rest of the competitions
    // opposite of what we want todo (subtracts from luck) little confusing!
    for(int i=0;i<contest.size();i++){
        luck-=contest[i];
    }
    std::cout<<luck;
    return 0;
}

