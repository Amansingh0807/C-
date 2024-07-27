

#include <iostream>
using namespace std;

// Function prototype - if we want to define a fuction after the function call we just need to use function prototype 
int sum(int a, int b)

int main() {
    int num1, num2;

    // Ask user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Call the sum function and store the result
    int result = sum(num1, num2);

    // Print the result
    cout << "The sum of num1 and num2 is : "<< result  << endl;

    return 0;
}

// Function definition - here we define our function that what it will gonna return after giving the input values 
int sum(int a, int b) {
    return a + b;
}