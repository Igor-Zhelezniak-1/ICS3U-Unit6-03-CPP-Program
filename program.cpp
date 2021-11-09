// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program uses an array

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int numberCalculator(std::array<int, N> randomNumbers) {
    // this functions add up all the numbers in the list

    int number = randomNumbers[0];

    for (int counter = 0; counter < randomNumbers.size(); counter++) {
        if (randomNumbers[counter] < number) {
            number = randomNumbers[counter];
        } else {
            number = number;
        }
    }

    return number;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int randomNumber;
    int smallestNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(-100, 100);  // [0,100]

    std::cout << "Starting..." << std::endl;

    std::cout << "" << std::endl;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomNumber = idist(rgen);
        randomNumbers[loopCounter] = randomNumber;
        std::cout << "The random number " << loopCounter + 1
        << " is: " << randomNumber << std::endl;
    }

    std::cout << "" << std::endl;
    smallestNumber = numberCalculator(randomNumbers);
    std::cout << "The smallest number is " << smallestNumber << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
