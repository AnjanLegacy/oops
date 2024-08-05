#include<iostream>
using namespace std;

class student {
protected:
    int roll_number;

public:
    student(int a) {
        roll_number = a;
    }

    void put_number(void) {
        cout << "Roll No: " << roll_number << "\n";
    }
};

class test : virtual public student {
protected:
    float part1, part2;

public:
    test(int a, float x, float y) : student(a) {
        part1 = x;
        part2 = y;
    }

    void put_marks(void) {
        cout << "Marks obtained:" << "\n"
            << "part1 = " << part1 << "\n"
            << "part2 =" << part2 << "\n";
    }
};

class sports : virtual public student {
protected:
    float score;

public:
    sports(int a, float s) : student(a) {
        score = s;
    }

    void put_score(void) {
        cout << "Sports score:" << score << "\n";
    }
};

class result : public test, public sports {
    float total;

public:
    result(int a, float x, float y, float s) : student(a), test(a, x, y), sports(a, s) {
    }

    void display(void);
};

void result::display(void) {
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "\n Total score:" << total << "\n";
}

int main() {
    result student1(678, 30.5, 25.5, 7.0);
    student1.display();
}
