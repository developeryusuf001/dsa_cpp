#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter an integer: " << endl;
    cin >> a;

    if (a%2==0){
        cout << "Even number is: " << a << endl;
    }
    else 
    cout << "Odd number is: " << a << endl;
}