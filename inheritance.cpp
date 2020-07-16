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
#include <istream>
#include <string>
#include <set>
#include <map>
#include <iomanip>

using namespace std;

class Rectangle {
public:
    // Virtual functions ensure that the correct function 
    // is called for an object, regardless of the type of 
    // reference (or pointer) used for function call.
    virtual void display() const {
        std::cout << width << ' ' << height << '\n';
    }
protected:
    int width;
    int height;
};

class RectangleArea :public Rectangle {
public:
    void display() const override {
        std::cout << (width * height) << '\n';
    }
    void read_input() {
        std::cin >> width >> height;
    }
};

int main() {
    /*
 * Declare a RectangleArea object
 */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;

    return 0;
}

