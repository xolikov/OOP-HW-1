#include "LMS.h"

using namespace std;

LMS::LMS(string name) {
    this->name = name;
}

void LMS::addStudent(Student student) {
    this->students.push_back(student);
}

void LMS::addCourse(Course course) {
    this->courses.push_back(course);
}

void LMS::addStudentToCourse(int student_id, int course_id) {
    Student *student = nullptr;
    for (Student &i: students) {
        if (i.getId() == student_id) {
            student = &i;
            break;
        }
    }
    Course *course = nullptr;
    for (Course &i: courses) {
        if (i.getId() == course_id) {
            course = &i;
            break;
        }
    }
    if (course != nullptr && student != nullptr) {
        student->takeCourse(*course);
        course->addStudent(*student);
    }
}

void LMS::printDetails() {
    cout << "LMS Name: " << name << endl;
    cout << "Students:" << endl;
    for (Student student: students) student.printDetails();
    cout << "Courses:" << endl;
    for (Course course: courses) course.printDetails();
    cout << endl;
}
