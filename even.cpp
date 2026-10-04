

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "ENTER THE NUMBER : " << endl;
    cin >> a;

    if (a % 2 == 0) {
        cout << "Number IS EVEN " << endl;
    }
    else {
        cout << "Number IS ODD " << endl;
    }

    return 0;
}