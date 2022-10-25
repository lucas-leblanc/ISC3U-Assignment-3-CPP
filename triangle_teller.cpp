// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by : Lucas LeBlanc
// Created on : Oct 2022
// ICS3U-Assignment-3-CPP File, choosing the right triangle in C++

#include <iostream>
using namespace std;

int main() 
{
    int side1, side2, side3;
    cout << "\nPlease Enter Three Sides of a Triangle =  ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) 
    {
        cout << "\nThis is an Equilateral Triangle\n";
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        cout << "\nThis is an Isosceles Triangle\n";
    } 
    else 
    cout << "\nThis is a Scalene Triangle\n";

    return 0;
    std::cout << "\n\n\nDone.\n";
}
