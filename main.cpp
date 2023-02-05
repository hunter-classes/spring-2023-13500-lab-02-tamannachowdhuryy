/*
Author: Tamanna Chowdhury
GitHub: tamannachowdhuryy
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Input validation Lab1A

This program does not as the user for any input but it take the lower and upper
limits interval. I used a funcs.h to store infromation that will be rep-eated
over and over again.
*/

#include "funcs.h" // file that contains definition
#include <iostream>
int main() {
  // theses are the integers that are being tested
  int L = -5;
  int U = 10;
  // statement that will be printed out
  std::cout << "Interval from L " << L << " to U " << U << "\n";
  // will print out the interval numbers
  print_interval(L, U);
  return 0;
}

