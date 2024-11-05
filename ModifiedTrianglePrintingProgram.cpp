/*(Modified Triangle-Printing Program) Modify Exercise 5.15 to combine your code from
the four separate triangles of asterisks such that all four patterns print side by side. [Hint: Make clever
use of nested for loops.]

*        ********** **********                  *
**       *********   *********                 **
***      ********     ********                ***
****     *******       *******               ****
*****    ******         ******              *****
******   *****           *****             ******
*******  ****             ****            *******
******** ***               ***           ********
***********                 **          *********
**********                   *         **********
*/
#include <iostream>
using namespace std;

int main() {

    int y{10};
    for (int x=1; x <= 10; x++) {
        for (int n=1; n<=x; n++){
            cout << "*";
        }

        for (int n= y-x; n >=1; n--){
            cout << " ";
        }

        for (int n =y-x+1; n>=1; n--){
            cout << "*";
        }

        for (int n = 1; n<x; n++){
            cout << " ";
        }

        for (int n = 1; n < x; n++){
            cout << " ";
        }

        for (int n = y-x+1; n >=1; n--){
            cout << "*";
        }

        for (int n = y-x; n >= 1; n--){
            cout << " ";
        }

        for (int n = 1; n <= x; n++){
            cout << "*";
        }
        cout <<endl;
    }









}
