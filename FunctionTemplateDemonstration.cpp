#include <iostream>
using namespace std;

//Function Templates are used to implement function overloading in a more compact manner
//Type parameters are in the angle brackets are aliases i.e they stand in for each unique
//type that maybe used in the function
//Endeavor to include all the types in the function to enable the compiler deduce
//the type each alias represents
template <typename T, typename N, typename F>
    N maximum (T val1, T val2, N val3, F entry) {//F entry is included the parameter list just so the compiler can know
        //what the data type for guessWhat should be.
        F guessWhat = 8.6;
        N maxVal = val1;
        if (val2 > val1) {
            maxVal = val2;
        }

        if (val3 > val2) {
            maxVal = val3;
        }

        cout << guessWhat << endl;

        return maxVal;
    }

int main () {
    int value1, value2;
    double value3;
    float entry = 2.4;//for guessWhat's sake
    cout << "Pls enter three values" << endl;
    cin >> value1 >> value2 >> value3;

    cout << "Your maximum value is " << maximum(value1, value2, value3, entry) << endl;
    return 0;
}
