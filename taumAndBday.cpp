#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long T,b,w,x,y,z,ans; // this is the key
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> b >> w;
        cin >> x >> y >> z;
        // x = bc = black price
        // y = wc = white pice
        // black gift * minimum(black price, white price + z(cost of conversion))
        // white gift * minimum(white price, black price + z(cost of conversion))
        // The cost of converting each black gift into white gift or vice versa is  units.
        ans = (b * min(x,y+z)) + (w * min(y,x+z));
        cout << ans << endl;
    }
    return 0;
}