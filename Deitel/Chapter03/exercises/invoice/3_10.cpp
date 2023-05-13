#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice inv{"4A", "Hammer", 1, 10};
    cout << "Total: $" << inv.getInvoiceAmount() << endl;
    inv.setDiscount(0.50);
    cout << "Total with discount: $" << inv.getInvoiceAmount() << endl;
    
    return 0;
}