#include <iostream>

using namespace std;

int main() {
    int num = 0;
    cout << "Enter a four digit integer: ";
    cin >> num;

    cout << ((num % 1000) % 100) % 10 << ((num % 1000) % 100) / 10  <<  (num % 1000) / 100 << num / 1000 << endl;

    return 0;
}