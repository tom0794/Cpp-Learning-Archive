#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    cout << "code: " << static_cast<int>(character) << endl;

    return 0;
}