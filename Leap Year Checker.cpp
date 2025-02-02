#include <iostream>
using namespace std;

/*Write a program to determine whether a given year is a leap year.Note:A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400. */

int main(){
    
    //user year input
    int year;
    cout << "This program checks to see if the entered year is a leap year." << endl;
    cout << "Please enter the year you would like to check: ";
    cin >> year;

    double remainder1 = year % 4;    //variable for checks to include every 4th year
    double remainder2 = year % 100;  //variable for checks to exclude every 100th year
    double remainder3 = year % 400;  //variable for checks to except every 400th year
    
   remainder1 == 0 && remainder2 != 0 || remainder3 == 0 ? cout << "This is a leap year." : cout << "This is not a leap year."; //logical checks to determine leap year & output.
 
   return 0;
}
