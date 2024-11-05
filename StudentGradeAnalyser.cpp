//Students' Score Analysis
#include <iostream>
#include <string>

using namespace std;

int main(){
    string studentName;
    int gradeIndicator;
    int passCounter{0}, failCounter{0};

        cout << "Pls enter student's name: " << endl;
        cin >> studentName;
        cout << "Pls enter grade indicator (pass=1, fail=2) or input -1 to end: " << endl;
        cin >> gradeIndicator;

    while (gradeIndicator != -1 ){
        if(gradeIndicator == 1){
            passCounter = passCounter+1;
        } else if(gradeIndicator == 2){
            failCounter = failCounter+1;
        }
        cout << "Pls enter student's name or Nil to end: " ;
        cin >> studentName;
        cout << "\nPls enter grade indicator (pass=1, fail=2) or input -1 to end: " ;
        cin >> gradeIndicator;
    }

    cout << "RESULT SUMMARY\nNo of Students that passed is "<< passCounter << "\nNo of Students that failed is "
    << failCounter << endl;

    if (passCounter > 8){
        cout << "HURRAY!!! Bonus to the instructor" << endl;
    } else {
        cout << "Sanction the Teacher" << endl;
    }

}
