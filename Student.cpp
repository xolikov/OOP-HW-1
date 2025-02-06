#include "Student.h"
#include "Course.h"

using namespace std;

Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
}

int Student::getId() const {
    return id;
}

string Student::getName() const {
    return name;
}

vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}

bool Student::takesCourse(Course course) {
    auto it = find(enrolledCourses.begin(), enrolledCourses.end(), course.getId());
    if (it == enrolledCourses.end()) return false;
    return true;
}

bool Student::takeCourse(Course course) {
    if (!takesCourse(course)) enrolledCourses.push_back(course.getId());
    return true;
}

void Student::dropCourse(Course course) {
    enrolledCourses.erase(remove(enrolledCourses.begin(), enrolledCourses.end(), course.getId()),
                          enrolledCourses.end());
}

void Student::printDetails() {
    cout << "Student ID: " << getId() << ", Name: " << getName() << endl;
    cout << "Enrolled Courses: ";
    for (int course: enrolledCourses) cout << course << " " << endl;
}
