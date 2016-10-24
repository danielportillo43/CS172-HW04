//
//  AnalyzeInput.hpp
//  homework04
//
//  Created by Daniel Portillo on 10/23/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef AnalyzeInput_hpp
#define AnalyzeInput_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


void analyzeInput() {
    int arraySize;//cangeable array size
    int const *pArraySize = &arraySize;//make the value "arraySize" usable for an array parameter
    int nums[*pArraySize];
    //initialize the array...
    for (int i = 0; i < *pArraySize; i++) {
        nums[i] = NULL;
    }
    
    
    cout << "Enter array size: ";
    cin >> arraySize;
    //input "arraySize" numbers.
    cout << "Enter " << arraySize << " numbers: ";
    int hold;
    for (int i = 0; i < arraySize; i++) {
        cin >> hold;
        nums[i] = hold;
    }
    
    
    //Find average...
    ///sum
    double sum;
    for (int i = 0; i < arraySize; i++) {
        sum += nums[i];
    }
    ///average
    double average = sum / arraySize;
    cout << "The average of the array is: " << average << endl;
    //find out how many numbers are above the average
    int larger = 0;
    for (int i = 0; i < arraySize; i++) {
        if (nums[i] > average) {
            larger++;
        }
    }
    cout << "There are " << larger << " numbers above the average. \n \n";
}

#endif /* AnalyzeInput_hpp */
