//
//  theCourseclass.cpp
//  homework04
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "theCourseclass.hpp"
#include <iostream>
using namespace std;

Course::Course(const string& courseName, int capacity) {
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}
Course::~Course() {
    delete [] students;
}
string Course::getCourseName() const {
    return courseName;
}
void Course::addStudent(const string& name) {
    if (numberOfStudents >= capacity) {
        int newCapacity = (2 * capacity);
        string *newStudent = new string[newCapacity];
        for (int i = 0; i < numberOfStudents; i++) {
            newStudent[i] = students[i];
        }
        numberOfStudents++;
    }
    students[numberOfStudents] = name;
    numberOfStudents++;
}
void Course::dropStudent(const string& name) {
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i] == name) {
            for (int j = i; j < numberOfStudents; j++) {
                students[j] = students[j + 1];
            }
            numberOfStudents--;
        }
    }
    
}
string* Course::getStudents() const {
    return students;
}
int Course::getNumberOfStudents() const {
    return numberOfStudents;
}
void Course::clear(Course& courseName) {
    courseName.students = NULL;
    numberOfStudents = 0;
}
Course::Course(const Course& course) {
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
}
void Course::outputCourseRoster() {
    cout << "Course Roster" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
            cout << students[i] << endl;
    }
}





