// Maximal Heart Rate Calculator
#include <iostream>
using namespace std;

int main() {
    //This code determines your maximal heart rate
    int age;
    float MHR1, MHR2, MHR3, MHR4, upperLimit, lowerLimit;

    cout << "Please enter your age: ";
    cin >> age;
    MHR1 = 220-age;
    MHR2 = 208-0.7*age; //MHR according to Tanaka
    MHR3 = 207-0.7*age; //MHR according to Gellish
    MHR4 = 211-0.64*age; //MHR according to Nes

    if (MHR1>MHR2 && MHR1>MHR3 && MHR1>MHR4){
        upperLimit = MHR1;
    }else if(MHR2>MHR3 && MHR2>MHR4){
                upperLimit = MHR2;
            }else if(MHR3>MHR4){
                    upperLimit = MHR3;
                }else {
                    upperLimit = MHR4;
                }

    if (MHR1<MHR2 && MHR1<MHR3 && MHR1<MHR4){
        lowerLimit = MHR1;
    }else if(MHR2<MHR3 && MHR2<MHR4){
                lowerLimit = MHR2;
            }else if(MHR3<MHR4){
                    lowerLimit = MHR3;
                }else {
                    lowerLimit = MHR4;
                }

    cout << "MHR   " << "Conventional  " << "Tanaka   " << "Gellish   " << "Nes et al   " << endl;
    cout <<"       " << MHR1<< "          " << MHR2 << "         " << MHR3 << "       " << MHR4 << endl;
    cout << "Your Maximal Heart Rate is between "<< lowerLimit << " and " << upperLimit << endl;

}

