#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    cout << "Sum is " << a + b + c << endl;
    cout << "Average is " << (a + b + c) / 3 << endl;
    cout << "Product is " << a * b * c << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}