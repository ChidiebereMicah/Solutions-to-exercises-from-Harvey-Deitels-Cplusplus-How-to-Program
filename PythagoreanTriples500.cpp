/*5.20 (Pythagorean Triples) A right triangle can have sides whose lengths are all integers. The set
of three integer values for the lengths of the sides of a right triangle is called a Pythagorean triple.
The lengths of the three sides must satisfy the relationship that the sum of the squares of two of the
sides is equal to the square of the hypotenuse. Write an application that displays a table of the
Pythagorean triples for side1, side2 and the hypotenuse, all no larger than 500. Use a triple-nested
for loop that tries all possibilities. This is an example of “brute-force” computing. You’ll learn in
more advanced computer-science courses that for many interesting problems there’s no known algorithmic
approach other than using sheer brute force.*/

#include <iostream>
#include <cmath>//we will be using the power function

using namespace std;

int main(){
    int opp, adj, hyp;
    int counter = 0;

    /*using a triple nested for loop, we can test for all possible combinations of the integers
    from 1-500 for the opposite and adjacent sides*/
    for (opp = 1; opp <= 500; opp++){
        for (adj = 1; adj <= 500; adj++){
            for (hyp = 5; hyp <= 500; hyp++){// "5" is used because it is the smallest integer that can
                                             //be the value of the hypotenuse for a pythagorean triple
                if ((opp*opp) + (adj*adj) == (hyp*hyp)){//testing for all values of the hypotenuse from 1-500
                    counter++;//to track how many Pythagorean triples exist from 1-500
                    cout << counter << ".) " << opp <<"\t" << adj <<"\t" << hyp << endl;
                }
            }
        }
    }




}
