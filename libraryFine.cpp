#include <bits/stdc++.h>

using namespace std;   

// it's returned > due
// NOT !=
// Otherwise could be early!
int main(){
    int dR, mR, yR;
    int dD, mD, yD;

    std::cin >> dR >> mR >> yR;
    std::cin >> dD >> mD >> yD;

    int fine = 0;

    if (dR > dD && mR == mD && yR == yD) {
        fine = 15 * (dR - dD);
    }
    else if (mR > mD && yR == yD) {
        fine = 500 * (mR - mD);
    }
    else if (yR > yD) {
        fine = 10000;
    }

    std::cout << fine;

    return 0;
}



