#include <bits/stdc++.h>

using namespace std;

int main(){
    int budget, n, m;
    std::cin>>budget>>n>>m;

    std::vector<int> keyboard(n), drives(m);

    for(auto&e:keyboard)
        std::cin>>e;
    for(auto&e:drives)
        std::cin>>e;

    int max_spent = -1;
    
    int t;

    for(int i=0;i<keyboard.size();i++){ // iterate through loop
        for(int j=0;j<drives.size();j++){ // iterate through rest of loop
            t = keyboard[i] + drives[j];
            if(t>max_spent && t<=budget){ // adjust the minimum as she wants to maximise
                max_spent = t;
            }
        }
    }
    std::cout<<max_spent<<'\n';

    return 0;
}
