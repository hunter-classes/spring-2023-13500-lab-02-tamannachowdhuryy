/*
Author: Tamanna Chowdhury
GitHub: tamannachowdhuryy
Course: CSCI-135
Instructor: Mike Zamansky 
Assignment: Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5,
8, 13…. Lab2D
*/
  
#include <iostream>
int main() {
  // this is the start of the array where we decleared that the array will end
  // at 60
  int fib[60];
  // this is the first 2 given terms
  fib[0] = 0;
  fib[1] = 1;
  // I used for loop so I can inital,; condition; and statement
  for (int i = 2; i < 60; i++) {
    // formual that is used to calculate the fibonacci number
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (int i = 0; i < 60; i++) {
    // this will print everything out in a list
    std::cout << fib[i] << "\n";
  }
  return 0;
}
