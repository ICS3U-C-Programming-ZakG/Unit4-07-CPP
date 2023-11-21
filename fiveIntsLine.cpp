// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 21, 2023
// This program displays all numbers from 1000 to 2000,
// inclusive, and displays 5 numbers per line.

#include <iostream>

int main() {
    // introduce program to user
    std::cout << "This program displays all numbers from 1000 to 2000.\n";

    // for loop of
    for (int counter = 1000; counter <= 2000; counter++) {
        if (counter == 1000) {
            std::cout << "" << counter << " ";
        } else if (counter % 5 == 0) {
            std::cout << "\n" << "" << counter << " ";
        } else {
            std::cout << "" << counter << " ";
        }
    }
}
