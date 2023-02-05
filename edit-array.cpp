/*
Author: Tamanna Chowdhury 
GitHub: tamannachowdhuryy
Course: CSCI-135
Instructor: Mike Zamansky  
Assignment: Using arrays to store, update, and retrieve numbers. Lab2C
*/

#include <iostream> 
int main(){
  //these are our values for our array 
  int myData = 10;
  int i,v; //i is cell index and v is new value
  double values[myData]; // this is data that is being stored
  for(int k = 0; k < myData; k++){ //this is the for loop where I decleared k as a int
    
    values[k] = 1;// giving the value in the array a value
  }
    do{
      for(int k = 0; k < myData; k++){
// this will print out the values and then give it space between each number 
        std::cout << values[k] << " "; 
      }
      std::cout << std::endl; //seperate the two line from the users input 
// get i and v from the user
        std::cout << "Input index: ";
        std::cin >> i;
        std::cout << "Input value: ";
        std::cin >> v;
// I used an if... else statment because it will allow the program to go through the process to check if the values inputed can be apart of the index or if it will end the index
      if(i >= 0 && i < 10){ // this is a for loop to see the updated array 
        values[i] = v;// print new values 
      } else{ 
        // this will only accure when the values reach its range
        std::cout << "Index out of range. Exit." << "\n";
        break;  // this declears the loop to come to an end 
      }
    } while(true); // decares the array to be true after the staement is put 
  
  return 0;
}
