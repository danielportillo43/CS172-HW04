//
//  main.cpp
//  homework04
//
//  Created by Daniel Portillo on 10/23/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "AnalyzeInput.hpp"
#include "IncreaseArraySize.h"
#include "FindTheSmallestElement.h"
#include "theRectangle2Dclass.h"

int main(int argc, const char * argv[]) {
////Ex11.1: AnalyzeInput
    cout << "Ex11.1: AnalyzeInput\n";
    analyzeInput();
    cout << endl << endl;
////Ex11.3: Increase Array Size
    cout << "Ex11.3: Increase Array Size\n";
    int size;
    int const *psize = &size;
    int list[*psize];
    cout << "Enter array size: ";
    cin >> size;
    //input numbers.
    cout << "Enter " << size << " numbers: ";
    int hold;
    for (int i = 0; i < size; i++) {
        cin >> hold;
        list[i] = hold;
    }
    //call function
    int *p = doubleCapacity(list, size);
    printArray(p, (2 * size));
    cout << endl << endl << endl;
////Ex11.5: Find the Smallest Element
    cout << "Ex11.5: Find the Smallest Element\n";
    //test array
    int test[] = {1,2,4,5,10,100,2,-22};
    printArray(test, 8);
    //call function
    *p = *smallest(test);
    cout << endl << *p << endl;
////Ex11.9
    
////Ex11.13
    

    return 7;
}
