// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to testing the loop and if statement

#include <iostream>

int main() {
    // this function is to test loop and if statement
    for (int loopCounter = 1000; loopCounter <= 2000; loopCounter++) {
        if ((loopCounter % 5) == 4) {
            std::cout << " " << loopCounter << std::endl;
        } else {
            std::cout << " " << loopCounter;
        }
    }
}
