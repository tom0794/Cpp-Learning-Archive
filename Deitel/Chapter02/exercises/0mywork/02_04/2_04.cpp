#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    int product = 0;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter z: ";
    cin >> z;

    product = x * y * z;
    cout << "Product is: " << product << endl;

    return 0;
}