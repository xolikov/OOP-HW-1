#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>

using namespace std;

class Course;

class Student {
public:
    Student(int id, string name);

    int getId() const;

    string getName() const;

    vector<int> getEnrolledCourses() const;

    bool takesCourse(Course course);

    bool takeCourse(Course course);

    void dropCourse(Course course);

    void printDetails();

private:
    int id;
    string name;
    vector<int> enrolledCourses;
    int MAX_ALLOWED_CREDITS = 18;
};

#endif
