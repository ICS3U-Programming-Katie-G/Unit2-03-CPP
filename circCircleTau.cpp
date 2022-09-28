// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: September 27th, 2022
// This program calculates the circumference of
// a circle when given the radius via user input
// and using tau in the circumference formula.
#include <iostream>

int main() {
    // declaring the constant of Tau.
    const float TAU = 6.28;

    // declaring the radius and circumference variables.
    float radius, circumference;

    // getting the radius from the user.
    std::cout << "Please input the radius of your circle in cm: ";
    std::cin >> radius;

    // calculating the circumference using tau in the formula.
    circumference = TAU * radius;

    // displays the circumference back to the user.
    std::cout << "\n";
    std::cout << "The circumference of the circle (calculated using Tau!)";
    std::cout << "with the radius you inputted is : ";
    std::cout << circumference << " cm " << std::endl;
}
