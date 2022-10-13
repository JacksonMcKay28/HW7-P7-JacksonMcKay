//Title HW7 Problem 7, Bronson 7.2 #4 Electrical Eng
//Programmer: Jackson McKay
//Course: CSCI 130-001

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  //set up arrays
  double resistance[5] = {16, 27, 39, 56, 81};
  double currents[5];
  double power[5];

  //variable for total
  double total;

  //for loop to ask for currents and to calc power
  for (int i = 0; i < 5; i++) 
  {
    cout << "Enter values for current: ";
    cin >> currents[i];
    power[i] = resistance[i] * pow(currents[i],2);
  }

  //formatting the table
  //headers with 20 spaces from start of word to start of next
  cout << "Resistance          Current             Power" << endl;
  //for loop to lay out all of the values from arrays
  for (int i = 0; i < 5; i++) 
  {
    cout << resistance[i] << setw(20) << currents[i] << setw(15) << power[i];  
  }
}