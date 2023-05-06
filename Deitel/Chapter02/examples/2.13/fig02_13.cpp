/*
 * =====================================================================================
 *
 *       Filename:  
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thanks to github you know it
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author: Mahmut Erdem ÖZGEN   m.erdemozgen@gmail.com
 *   
 *
 * =====================================================================================
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char *argv[]) {
    int number1;
    int number2;

    cout << "Enter two integers to compare: ";  // prompt user for data
    cin >> number1 >> number2;  // read two integers from user

    if (number1 == number2) {
        cout << number1 << " == " << number2 << endl;
    }

    if (number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }

    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }

    return 0;
}
