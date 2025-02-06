#include "Course.h"
#include "Student.h"

using namespace std;

Course::Course(int id, string name, int credits) {
    this->id = id;
    this->name = name;
    this->credits = credits;
}

int Course::getId() const {
    return id;
}

string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}

bool Course::hasStudent(Student student) {
    auto it = find(students.begin(), students.end(), student.getId());
    if (it == students.end()) return false;
    return true;
}

bool Course::addStudent(Student student) {
    students.push_back(student.getId());
    return true;
}

void Course::dropStudent(Student student) {
    students.erase(remove(students.begin(), students.end(), student.getId()), students.end());
}

void Course::printDetails() {
    cout << "Course ID: " << getId() << ", Name: " << getName() << ", Credits: " << getCredits() << endl;
    cout << "Enrolled Students:";
    for (int student_id: students) cout << " " << student_id;
    cout << " " << endl;
}
