/*
Author: Tamanna Chowdhury 
GitHub: tamannachowdhuryy
Course: CSCI-135
Instructor: Mike Zamansky  
Assignment: Input validation Lab2A

This will take the users input and make them enter an integer within 0 < n < 100 and will redo it over and over if the correct number is not inserted. And if it is it will return the square root. 
*/

#include <iostream>

int main(){
  int n; // the letter we will be using as a placeholder
  std::cout << "Please enter an integer: "; //user will input info
  std::cin >> n;
  while(n >= 100 || n <= 0){ // this is option one while n is less than or equal too 0 || <- which means or  n greater than equal too 100
    std::cout << "Please re-enter: "; // user will reinput if it is the wrong number that is not with in the range of 0  to 100
    std::cin >> n;
  }
  if(n > 0 && n < 100){ // this is the other possiblity which is the correct one if the number is less than 0 and greater then 100
    std::cout << "The square is " << n * n << "\n"; // this will print out the square root of the number the user has inputted 
  }
  return 0;
  
}

