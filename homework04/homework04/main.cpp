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
#include "theCourseclass.hpp"

int main(int argc, const char * argv[]) {
////Ex11.1: AnalyzeInput
    /*cout << "Ex11.1: AnalyzeInput\n";
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
    
    */
////Ex11.9
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
    cout << r1.getArea() << endl;
    cout << r1.getPerimeter() << endl;
    cout << r1.contains(3, 3) << endl;
    cout << r1.contains(r2) << endl;
    cout << r1.overlaps(r3) << endl;
    /*
     
////Ex11.13
    Course c1("CS172",3);
    Course cc(c1);
    c1.addStudent("Tevyn");
    c1.addStudent("Dalin");
    c1.addStudent("Lucas");
    c1.outputCourseRoster();
    c1.dropStudent("Lucas");
    c1.outputCourseRoster();
    */
    
    
    return 7;
}








