//CODE TO PRINT THE FIBONACCI SEQUENCE UP TO ABOUT 1,000,000
#include <iostream>
using namespace std;

int main(){
    long int i{0}, j{1}, k{0}; //I AND J ARE THE SEED VALUES

    cout << i << " " << j << " ";

    while(k < 1000000)/*for this function to run infinitely, make the condition "true" instead of "k < 1000000"
        But note that the value of k can increase only up to the maximum value of the data type which in this case is "long int"*/
        {
        k = i+j;
        cout << k << " " ;
        i=j;
        j=k;

    }

}
