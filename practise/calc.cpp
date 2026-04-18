#include <iostream>
using namespace std;

int main() {
    float a;
    float b;

    cout << "Enter the first number" << endl;
    cin >> a;

    cout << "Enter the second number" << endl;
    cin >> b;

    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float division = a / b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;
}