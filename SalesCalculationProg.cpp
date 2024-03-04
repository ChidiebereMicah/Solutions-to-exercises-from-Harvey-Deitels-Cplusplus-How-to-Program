/*5.17 (Calculating Sales) An online retailer sells five products whose retail prices are as follows:
Product 1, $2.98; product 2, $4.50; product 3, $9.98; product 4, $4.49 and product 5, $6.87.
Write an application that reads a series of pairs of numbers as follows:
a) product number
b) quantity sold
Your program should use a switch statement to determine the retail price for each product. It
should calculate and display the total retail value of all products sold. Use a sentinel-controlled
loop to determine when the program should stop looping and display the final results.*/

#include <iostream>
#include <iomanip>//we'll have to use setw() in this prog, so...

using namespace std;

int main(){
    //initializing counters to keep track of the number of each product
    unsigned int P1count{0},
                 P2count{0},
                 P3count{0},
                 P4count{0},
                 P5count{0};

    //initializing the prices for each product number
    double P1price{2.98};
    double P2price{4.50};
    double P3price{9.98};
    double P4price{4.49};
    double P5price{6.87};

    unsigned quantity;
    int productNum;

    cout << "Enter the product number: 1,2,3,4 or 5\n"
         << "Enter -1 if you wish to quit. ";
    cin >> productNum;
    cout << endl;

    if (productNum == -1){
        cout << "You have quit without making any entries." << endl;
        return 0;
    }

    //creating the sentinel controlled while loop
    while (productNum != -1){
        if (productNum > 5 || productNum < -1 || productNum == 0){
            cout << "Your input is invalid\n" << endl;
        }
        else {
            cout << "Enter the quantity: ";
            cin >> quantity;
            cout << endl;
            switch (productNum) {

                case 1:
                    P1count = P1count + quantity;
                break;

                case 2:
                    P2count = P2count + quantity;
                break;

                case 3:
                    P3count = P3count + quantity;
                break;

                case 4:
                    P4count = P4count + quantity;
                break;

                default:
                    P5count = P5count + quantity;
            }
        }
         cout << "Enter the product number: 1,2,3,4 or 5\n"
                 << "Enter -1 to display result. ";
         cin >> productNum;
         cout << endl;
    }

    cout << "Product Number" << setw(12) << "Price" << "\n" << setw(7)
        << "1" << setw(15) << "#" << P1count * P1price << "\n" << setw(7)
        << "2" << setw(15) << "#" << P2count * P2price << "\n" << setw(7)
        << "3" << setw(15) << "#" << P3count * P3price << "\n" << setw(7)
        << "4" << setw(15) << "#" << P4count * P4price << "\n" << setw(7)
        << "5" << setw(15) << "#" << P5count * P5price << endl;
}
