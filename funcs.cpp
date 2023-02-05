#include <iostream>
#include "funcs.h"
//void will stop it from reapting over and over again
void print_interval(int L, int U) {
    for (int i = L; i < U; i++) { // used a for loop to print out the upper and lower limits
        std::cout << i << " ";  // made space to make it easer to see the list
    }
    std::cout << "\n";
}
