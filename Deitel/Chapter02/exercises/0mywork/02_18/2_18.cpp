// page 109

#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is larger" << endl;
    } else if (num2 > num1) {
        cout << num2 << " is larger" << endl;
    } else {
        cout << "The numbers are equal" << endl;
    }    

    return 0;
}