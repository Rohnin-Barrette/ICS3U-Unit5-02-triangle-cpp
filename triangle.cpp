// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program calculates area of a triangle

#include <iostream>

void CalcualteArea(float base, float height) {
    // calculates area of a triangle
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area is " << area << "cm²" << std::endl;
}

main() {
    // this funnction gets base and height

    std::string baseFromUserString;
    std::string heightFromUserString;
    float baseFromUser;
    float heightFromUser;

    // input
    try {
        std::cout << "Enter the base length of a triangle (cm): ";
        std::cin >> baseFromUserString;
        std::cout << "Enter the height of a triangle (cm): ";
        std::cin >> heightFromUserString;
        std::cout << std::endl;

        baseFromUser = std::stof(baseFromUserString);
        heightFromUser = std::stof(heightFromUserString);

    // call functions
    CalcualteArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
