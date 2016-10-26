//
//  IncreaseArraySize.h
//  homework04
//
//  Created by Daniel Portillo on 10/23/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef IncreaseArraySize_h
#define IncreaseArraySize_h
//A function that doubles the size of an array
template <typename T>
T *doubleCapacity(const T *list, int size) {
    //creates the an array that is double "size"
    int newSize = (2 * size);
    T *result = new T[newSize];
    //initialize the array...
    for (int i = 0; i < newSize; i++) {
        result[i] = NULL;
    }
    //copies the previous values of "list" to the new array
    for (int i = 0; i < size; i++) {
        result[i] = list[i];
    }
    return result;
}
//print the contents of array
void printArray(const int *list, int size) {
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
}

#endif /* IncreaseArraySize_h */
