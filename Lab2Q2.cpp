#include <iostream>

class Student {
private:
    float assessmentMarks;
    float practicalMarks;

public:
    // Member function to set assessment and practical marks
    void setMarks(float assessment, float practical) {
        assessmentMarks = assessment;
        practicalMarks = practical;
    }

    // Member function to calculate and publish total marks
    void publishMarks() {
        float totalMarks = assessmentMarks + practicalMarks;
        std::cout << "Assessment Marks: " << assessmentMarks << std::endl;
        std::cout << "Practical Marks: " << practicalMarks << std::endl;
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    Student student;

    // Input assessment and practical marks
    float assessment, practical;
    std::cout << "Enter Assessment Marks: ";
    std::cin >> assessment;
    std::cout << "Enter Practical Marks: ";
    std::cin >> practical;

    // Set marks and publish the total
    student.setMarks(assessment, practical);
    student.publishMarks();

    return 0;
}
