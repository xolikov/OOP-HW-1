#include <iostream>
#include <string>
#include "Student.h"
#include "Course.h"
#include "LMS.h"

using namespace std;

int main() {
    string lms;
    getline(cin, lms);
    LMS MyLMS(lms);
    int number_of_students;
    cin >> number_of_students;
    for (int i = 0; i < number_of_students; i++) {
        int id;
        string name;
        cin >> id >> name;
        Student student(id, name);
        MyLMS.addStudent(student);
    }
    int number_of_courses;
    cin >> number_of_courses;
    for (int i = 0; i < number_of_courses; i++) {
        string name;
        int id, credit;
        cin >> id >> name >> credit;
        Course course(id, name, credit);
        MyLMS.addCourse(course);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int student_id, course_id;
        cin >> student_id >> course_id;
        MyLMS.addStudentToCourse(student_id, course_id);
    }
    MyLMS.printDetails();
    return 0;
}
