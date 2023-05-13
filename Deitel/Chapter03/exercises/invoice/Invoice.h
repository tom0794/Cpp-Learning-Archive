#include <string>

class Invoice {
    public:
        explicit Invoice(
            std::string initPartNumber,
            std::string initPartDesc,
            int initQuantity,
            int initPrice
        ) : 
            partNumber{initPartNumber},
            partDescription{initPartDesc},
            quantity{initQuantity},
            price{initPrice} {
            vat = 0.20;
            discount = 0;
        }

        std::string getPartNumber() {
            return partNumber;
        }

        void setPartNumber(std::string partNum) {
            partNumber = partNum;
        }

        std::string getPartDescription() {
            return partDescription;
        }

        void setPartDescription(std::string partDesc) {
            partDescription = partDesc;
        }

        int getQuantity() {
            return quantity;
        }

        void setQuantity(int quant) {
            quantity = quant;
        }

        int getPrice() {
            return price;
        }

        void setPrice(int pr) {
            price = pr;
        }

        double getVAT() {
            return vat;
        }

        void setVAT(double inVat) {
            vat = inVat;
        }

        double getDiscount() {
            return discount;
        }

        void setDiscount(double disc) {
            if (disc > 0) {
                discount = disc;
            }
        }

        double getInvoiceAmount() {
            double amount = quantity * price;
            double vatAmount = amount * vat;
            double discountAmount = amount * discount;
            return amount + vatAmount - discountAmount;
        }

    private:
        std::string partNumber;
        std::string partDescription;
        int quantity;
        int price;
        double vat;
        double discount;
};