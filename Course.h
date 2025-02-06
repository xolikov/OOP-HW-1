#ifndef COURSE_H
#define COURSE_H

#include <bits/stdc++.h>

using namespace std;

class Student;

class Course {
public:
    Course(int id, string name, int credits);

    int getId() const;

    string getName() const;

    int getCredits() const;

    bool hasStudent(Student student);

    bool addStudent(Student student);

    void dropStudent(Student student);

    void printDetails();

private:
    int id;
    string name;
    int credits;
    vector<int> students;
};

#endif
