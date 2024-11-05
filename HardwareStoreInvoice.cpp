/*(Invoice class) Create a class called Invoice that a hardware store might use to represent an
invoice for an item sold at the store. An Invoice should include six data members-a part number
(type string), a part description (type string), a quantity of the item being purchased (type int),
a price per item (type int) a value-added tax (VAT) rate as a decimal (type double) and a discount
rate as a decimal(type double). Your class should have a constructor that initializes the six data
members. The constructor should initialize the first four data members with values from parameters
and the last two data members to default values of 0.20 per cent and zero respectively. Provide
a set and a get functions for each data member. In addition, provide a member function named
getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per
item and applies the tax and discount amounts), then returns the amount. Have the set data members
perform validity checks on their parameters—if a parameter value is not positive, it should be
left unchanged. Write a driver program to demonstrate Invoice’s capabilities.*/
#include <string>
#include <iostream>

using namespace std;


class Invoice{
public:
    //Invoice constructor that initializes all the  data members in this class
    Invoice (string partNum, string partDes, int quant, int PPI, double VAT, double discRate)
    : partNumber{partNum},
    partDescription{partDes},
    quantity{quant},
    pricePerItem{PPI}
    {
        //the ff if statements perform validity checks: the initializations are performed only when the validation conditions are met
        if (VAT > 0){
            VATrate = VAT;
        }
        if (discRate > 0){
            discountRate = discRate;
        }
        if (quant > 0){
            quantity = quant;
        }
        if (PPI > 0){
            pricePerItem = PPI;
        }
    }

    double getInvoiceAmount(){
        double InvoiceAmount = (quantity * pricePerItem) + (VATrate * quantity * pricePerItem) - (discountRate * quantity * pricePerItem);
    /*}
    double getInvoiceAmount() {*/
        return InvoiceAmount;
    }

    void setQuantity(int quant) {
        quantity = quant;
    }
    int getQuantity() const {
        return quantity;
    }

    void setPricePerItem(int PPI) {
        pricePerItem = PPI;
    }
    int getPricePerItem() const {
        return pricePerItem;
    }

    void setPartNumber(string partNum) {
        partNumber = partNum;
    }
    string getPartNumber() const {
        return partNumber;
    }

    void setPartDescription(string partDes) {
        partDescription = partDes;
    }
    string getPartDescription() const {
        return partDescription;
    }


private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;
    double VATrate{0.20}; //default initialization
    double discountRate{0}; //default initialization
};


int main(){
    Invoice mamaNkechi {"062-CG", "Amazon Delv", 5, 55, 0.20, 0};
    cout << "Your amount payable is #" <<mamaNkechi.getInvoiceAmount()<< endl;
}
