#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <sstream>
#include <set>
#include <map>

using namespace std;

// std::map <key_type, data_type>
// m.insert(make_pair("hello",9));
// m.erase(val); key type is val!
// map<string,int>::iterator itr=m.find(val); either returns element val otherwise m.end()
// map<string,int>::iterator itr=m.find("Maps"); is "Maps" present as key value 


int main() {
    int q, type;
    std::cin >> q;

    map<string, int> clas;

    string name;

    for (int i = 0, mark; i < q; i++) {
        std::cin >> type >> name;
        if (type == 1) {
            std::cin >> mark;
            clas[name] += mark; // add mark, as name key
        }
        else if (type == 2) {
            clas.erase(name); // erase name key
        }
        else
            std::cout << clas[name] << '\n'; // print name key
    }
    return 0;
}

