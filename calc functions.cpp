#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int  sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}
int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    int result;

    if (op == '+') 
        result = add(num1, num2);
    else if (op == '-') 
        result = sub(num1, num2);
    else if (op == '*') 
        result = mul(num1, num2);
    else if (op == '/') 
        result = div(num1, num2);
    else {
        cout << "Invalid operator";
        return 0;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}