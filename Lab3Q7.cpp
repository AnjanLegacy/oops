#include <iostream>
#include <cmath>
using namespace std;

class polar; // Forward declaration of the polar class

class rectangle {
    float x, y;

public:
    rectangle(float a, float b) : x(a), y(b) {}

    float get_x() const {
        return x;
    }

    float get_y() const {
        return y;
    }

    // Constructor for class-type to class-type conversion from polar to rectangle
    rectangle(const polar &p);
};

class polar {
    float radius, theta;

public:
    polar(float r, float t) : radius(r), theta(t) {}

    void show() const {
        cout << "radius is: " << radius << endl;
        cout << "theta is: " << theta * (180.0 / 3.14) << " degrees" << endl;
    }

    // Allow rectangle class to access private members
    friend class rectangle;
};

rectangle::rectangle(const polar &p) {
    float r = p.radius;
    float theta = p.theta;
    x = r * cos(theta);
    y = r * sin(theta);
}

int main() {
    // Convert from polar to rectangle
    polar p(10, 45); // Polar coordinates with radius 10 and angle 45 degrees
    rectangle r(p);

    cout << "Rectangular coordinates:" << endl;
    cout << "x: " << r.get_x() << endl;
    cout << "y: " << r.get_y() << endl;

    return 0;
}
