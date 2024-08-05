#include <iostream>
#include <cmath>
#define PI 3.141592654
using namespace std;

class polar; // Forward declaration of the polar class

class rectangle {
    float x;
    float y;

public:
    rectangle() : x(0.0), y(0.0) {}
    rectangle(float a, float b) : x(a), y(b) {}

    float get_x() const {
        return x;
    }

    float get_y() const {
        return y;
    }

    void show() const {
        cout << "x=" << x << "  " << "y=" << y;
    }

    // Constructor for class-type to class-type conversion from polar to rectangle
    rectangle(const polar &p);
};

class polar {
    float radius;
    float thita;

public:
    polar() : radius(0.0), thita(0.0) {}
    polar(float r, float t) : radius(r), thita(t) {}

    void show() const {
        cout << "radius is=" << radius << "   and  " << "thita=" << thita;
    }

    // Constructor for class-type to class-type conversion from rectangle to polar
    polar(const rectangle &r) {
        float tempx = r.get_x();
        float tempy = r.get_y();
        radius = sqrt(tempx * tempx + tempy * tempy);
        thita = atan(tempy / tempx);
    }

    float getRadius() const {
        return radius;
    }

    float getTheta() const {
        return thita;
    }
};

rectangle::rectangle(const polar &p) {
    float r = p.getRadius();
    float theta = p.getTheta();
    x = r * cos(theta);
    y = r * sin(theta);
}

int main() {
    // Convert from polar to rectangle
    polar p(10, 45); // Polar coordinates with radius 10 and angle 45 degrees
    rectangle r(p);

    cout << "Rectangular coordinates:" << endl;
    r.show();

    return 0;
}
