#include <iostream>
using namespace std;

class alpha {
    int x;

public:
    alpha(int i) {
        x = i;
        cout << "alpha initialized\n";
    }

    void show_x(void) {
        cout << "x = " << x << "\n";
    }

    ~alpha() {
        cout << "alpha destroyed\n";
    }
};

class beta {
    float y;

public:
    beta(float j) {
        y = j;
        cout << "beta initialized\n";
    }

    void show_y(void) {
        cout << "y=" << y << "\n";
    }

    ~beta() {
        cout << "beta destroyed\n";
    }
};

class gamma : public beta, public alpha {
    int m, n;

public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b) {
        m = c;
        n = d;
        cout << "gamma initialized\n";
    }

    void show_mn(void) {
        cout << "m=" << m << "\n"
             << "n = " << n << "\n";
    }

    ~gamma() {
        cout << "gamma destroyed\n";
    }
};

int main() {
    gamma g(5, 10.75, 20, 30);
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}
