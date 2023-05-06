#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the maximum heart rate calculator!\n";
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    a = b * c;

    cout << "Product is " << a << endl;

    return 0;
}