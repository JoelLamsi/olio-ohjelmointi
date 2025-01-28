#include "Student.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do {
        cout << endl;
        cout << "Select" << endl;
        cout << "0: Add student" << endl;
        cout << "1: Print all students" << endl;
        cout << "2: Sort and print students according to Name" << endl;
        cout << "3: Sort and print students according to Age" << endl;
        cout << "4: Find and print student" << endl;
        cin >> selection;

        switch (selection) {
            case 0:{
                string n;
                int a;
                cout << "Enter name of the new student: ";
                cin >> n;
                cout << "Enter age of the new student: ";
                cin >> a;
                studentList.push_back(Student(n, a));
                break;
            }
            case 1: {
                cout << "Student list:" << endl;
                for (Student student : studentList)
                {
                    student.printStudentInfo();
                }
                break;
            }
            case 2: {
                sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                    return a.getName() < b.getName();
                });

                cout << "Student list (sorted by name):" << endl;
                for (Student student : studentList)
                {
                    student.printStudentInfo();
                }
                break;
            }
            case 3: {
                sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                    return a.getAge() < b.getAge();
                });

                cout << "Student list (sorted by age):" << endl;
                for (Student student : studentList)
                {
                    student.printStudentInfo();
                }
                break;
            }
            case 4: {
                string searchName;
                cout << "Enter student's name to search: ";
                cin.ignore();
                getline(cin, searchName);

                auto it = find_if(studentList.begin(), studentList.end(), [&searchName](Student& student) {
                    return student.getName() == searchName;
                });
                if (it != studentList.end()) {
                    it->printStudentInfo();
                } else {
                    cout << "Student not found" << endl;
                }
            }
            default: {
                break;
            }
        }
    } while (selection < 5);
    return 0;
}
