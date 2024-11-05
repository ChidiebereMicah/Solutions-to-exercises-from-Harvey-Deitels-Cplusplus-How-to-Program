#include <iostream>

// Function To pass by value
void PassByValue(int x){
    x++;
    std::cout << x << " ";
}

// Function To pass by reference
void PassByRef(int &x){
    x++;
    std::cout << x << " ";
}

// Function To pass by pointer
void PassByPointer(int* x){
    (*x)++;
    std::cout << *x << " ";
}

main(){
    int a = 10; //this is the variable that will be passed into the fns
    PassByValue(a);
    std::cout << a << std::endl; //we see that a copy of a is passed into the fn hence the global variable, int a remains the same

    PassByRef(a);
    std::cout << a << std::endl;/*so when a is passed into the fn, it is received as a
                                reference to the exact mem location where int a is stored.
                                We see that the global variable, a is changed by the increment
                                operation inside the fn.*/

    PassByPointer(&a);
    std::cout << a << std::endl;/*we pass in the address of a because the fn is meant to receive a pointer to a mem address
                                An alternative way  to do this is as follows:*/
    int *b = &a;// creating a pointer to the mem address of a
    PassByPointer(b);/*pass the pointer, b into the fn as the argument.
                     Note that b is passed into the fn and not *b. This is because "b" is the actual mem address
                     of the pointer b which points to the mem location of a. On the other hand, "*b" is the dereferenced
                     value of the pointer and would yield the actual value in the mem location of the variable a.*/
    std::cout << a << std::endl; /*In both cases the global variable a is also changed because the
                                 operation inside the fn is done directly on value in the mem location of a*/
}


