#include <iostream>
using namespace std;

class student {
public:
    int rollNO;
    sring name;

    Student() {
        rollNo = 0;
        name = "Not assigned";
        cout << "Student object created" << endl;
    }
};

int main(){
student s1;
student s2;
cout << s1.rollNo << " " << s1.name << endl;
return 0;
}