//
//  FindTheSmallestElement.h
//  homework04
//
//  Created by Daniel Portillo on 10/23/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef FindTheSmallestElement_h
#define FindTheSmallestElement_h

int *smallest(const int *list) {
    //set the first number of the array for comparison
    int small = list[0];
    //create the pointer that will be returned out of the function
    int *smallest = new int[1];
    //step through the array saving the smallest number to the variable small
    for (int i = 0; i < sizeof(list); i++) {
        if (list[i] < small) {
            small = list[i];
        }
    }
    //assign the smallest value for return 
    smallest[0] = small;
    return smallest;
}

#endif /* FindTheSmallestElement_h */
