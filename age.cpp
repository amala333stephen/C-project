#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    double mark;

    cout << "==============================" << endl;
    cout << "        STUDENT PROFILE" << endl;
    cout << "==============================" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter your mark (out of 500): ";
    cin >> mark;

    double percentage = (mark / 500.0) * 100;

    cout << endl;
    cout << "==============================" << endl;
    cout << "        STUDENT PROFILE" << endl;
    cout << "==============================" << endl;

    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << " years" << endl;
    cout << "Marks      : " << mark << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    cout << "==============================" << endl;
    cout << "       Profile created! 🎉" << endl;
    cout << "==============================" << endl;

    return 0;
}