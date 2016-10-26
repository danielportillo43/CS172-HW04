//
//  theCourseclass.hpp
//  homework04
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef theCourseclass_hpp
#define theCourseclass_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Course {
public:
    Course(const string& courseName, int capacity);
    ~Course();
    Course(const Course&);
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear(Course& courseName);
    void outputCourseRoster();
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};


#endif /* theCourseclass_hpp */
