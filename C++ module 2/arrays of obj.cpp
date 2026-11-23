#include <iostream>
using namespace std;

class student {
public:
    int rollNo;
    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main(){
    student s[3];

    for (int i = 0: i < 3; i++) {
        cin >> s[i].rollNo;
    }
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }
    return 0;
}