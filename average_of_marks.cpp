// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Dec 2019
// This program finds the average of marks

#include <iostream>
#include <list>


main() {
    // this function uses a list to calculate the average of marks

    std::list<float> marks;
    float tempMark;
    float average;
    float total = 0;
    float counter = 0;

    // input
    std::cout << "Please enter your marks at a time. Enter '-1' to end.";
    std::cout << std::endl;

    std::cout << "Enter a mark: ";
    std::cin >> tempMark;
    marks.push_back(tempMark);

    while (tempMark != -1) {
        std::cout << "Enter a mark: ";
        std::cin >> tempMark;
        marks.push_back(tempMark);
    }

    marks.pop_back();  // remove the "-1" that was added
    std::cout << "" << std::endl;

    for (float tempMark2 : marks) {
        marks.push_front(tempMark2);
        total += tempMark2;
        counter += 1;
    }

    average = total / (counter);

    std::cout << "The average of your marks is: " << average << std::endl;
    std::cout << std::endl;
}
