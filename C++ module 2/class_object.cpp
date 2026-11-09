#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    string place;
};

int main () {
    student s1;
    student s2;

    s1.rollNo = 101;
    s1.name = "Rahul";
    s2.rollNo. = 102;
    s2.name = "Priya";

    s1.display();
    s2.display();
    return 0;
}