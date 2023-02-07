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
  print_interval(-5, 10); // this will test the number -5 and 10 
  std::cout << "Interval from L " << -5 << " to U " << 10 << "\n"; // statement that will be printed out
  std::cout << "\n"; // space just to make it easier to read 
  
  print_interval(13, 25); //test the int 13 and 25
  std::cout << "Interval from L " << 13 << " to U " << 25 << "\n";
  std::cout << "\n";
  
  print_interval(-10, -2); //will test the int -10 and 2
  std::cout << "Interval from L " << -10 << " to U " << -2 << "\n";
  std::cout << "\n";
  return 0;
}
