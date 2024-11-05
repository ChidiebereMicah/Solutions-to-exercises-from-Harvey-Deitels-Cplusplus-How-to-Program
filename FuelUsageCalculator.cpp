//Code for Fuel Usage Calculation (DEITEL EX. 4.13)
#include <iostream>
using namespace std;

int main(){
    double Kms, litres, kmsPerLit;
    double totKmsPerLit{0}, totKms{0}, totLit{0};

    cout << "Enter Kilometers driven (-1 to quit): "
    cin >> Kms;

    while (Kms != -1){
        cout << "Enter amount of liters: ";
        cin >> litres;
        cout << "Liters of fuel used for each Km: " << Kms/litres << "Litres" << endl;

        totKms = totKms + Kms;
        totLit = totLit + litres;
        totKmsPerLit = totKms/totLit;
        cout << "The total Kms/l is: " << totKmsPerLit << endl;

        cout << "\nEnter Kilometers driven (-1 to quit): ";
        cin >> Kms;

    }

}
