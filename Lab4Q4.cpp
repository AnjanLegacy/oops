#include <iostream>
using namespace std;

class Student {
protected:
    string studentName;

public:
    void inputStudentInfo() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
    }

    void displayStudentInfo() {
        cout << "Student Name: " << studentName << endl;
    }
};

class Sports {
protected:
    float score;

public:
    void inputSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> score;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << score << endl;
    }

    float getSportsScore() {
        return score;
    }
};

class Test : public Student {
protected:
    float testScore;

public:
    void inputTestScore() {
        cout << "Enter Test Score: ";
        cin >> testScore;
    }

    void displayTestScore() {
        cout << "Test Score: " << testScore << endl;
    }

    float getTestScore() {
        return testScore;
    }
};

class Result : public Test, public Sports {
private:
    float totalScore;

public:
    void inputResult() {
        inputStudentInfo();
        inputSportsScore();
        inputTestScore();
        
        // Calculate total score
        totalScore = getSportsScore() + getTestScore();
    }

    void displayResult() {
        cout << "\nResult Information:" << endl;
        displayStudentInfo();
        displaySportsScore();
        displayTestScore();
        
        // Display total score
        cout << "Total Score: " << totalScore << endl;
    }
};

int main() {
    Result r;

    r.inputResult();
    r.displayResult();

    return 0;
}
