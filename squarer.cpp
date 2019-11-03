// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program finds the squares of all numbers using a loop

#include <iostream>
#include <string>

main() {
    // This will calculate the number added up to number

    // variables
    int answer = 1;
    int looper = 0;
    int value_1;

    // input
    std::cout << "Input your number: " << std::endl;
    std::cin >> value_1;
    try {
        // process & output
        for (looper = 0; looper <= value_1; looper++) {
            answer = looper * looper;
            std::cout << looper << "² = " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input a valid positive integer" << std::endl;
    }
}
