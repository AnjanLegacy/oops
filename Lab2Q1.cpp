 #include <iostream>

// Function to calculate the smallest of two numbers
double findSmallest(double num1, double num2) {
    return (num1 < num2) ? num1 : num2;
}

int main() {
    double num1, num2;

    // Input the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the smallest number
    double smallest = findSmallest(num1, num2);

    // Display the smallest number
    std::cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}
