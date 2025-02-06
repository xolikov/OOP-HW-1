#ifndef LMS_H
#define LMS_H

#include "Student.h"
#include "Course.h"
#include <bits/stdc++.h>

using namespace std;

class LMS {
public:
    LMS(string name);

    void addStudent(Student student);

    void addCourse(Course course);

    void addStudentToCourse(int student, int course);

    void printDetails();

private:
    string name;
    vector<Student> students;
    vector<Course> courses;
};

#endif
