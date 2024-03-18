/*(“The Twelve Days of Christmas” Song) Write an application that uses iteration and switch
statements to print the song “The Twelve Days of Christmas.” One switch statement should be
used to print the day (“first,” “second,” and so on). A separate switch statement should be used to
print the remainder of each verse. Visit the website en.wikipedia.org/wiki/The_Twelve_Days_
of_Christmas_(song) for the lyrics of the song.*/

#include <iostream>
using namespace std;

int main() {
    string dayArray[12] = {"first", "second", "third", "fourth", "fifth", "sixth",
                          "seventh", "eight", "ninth", "tenth", "eleventh", "twelfth"};

    for (int counter = 1; counter <= 12; counter++){
        cout << "On the " << dayArray[counter-1] << " day of Christmas my true love sent to me..." << endl;

        switch (counter){
        case 12:
            cout << "twelve drummers drumming" << endl;
        case 11:
            cout << "eleven pipers piping" << endl;
        case 10:
            cout << "ten lords a-leaping" << endl;
        case 9:
            cout << "nine ladies dancing" << endl;
        case 8:
            cout << "eight maids a-milking" << endl;
        case 7:
            cout << "seven swans a-swimming" << endl;
        case 6:
            cout << "six geese a-laying" << endl;
        case 5:
            cout << "five gold rings" << endl;
        case 4:
            cout << "four calling birds" << endl;
        case 3:
            cout << "three French hens" << endl;
        case 2:
            cout << "two turtle doves" << endl;
        default:
            cout << "and a partridge in a pear tree" << endl;
        break;
        case 1:
            cout << "a partridge in a pear tree" << endl;
        }
        cout << "\n";
    }
}
