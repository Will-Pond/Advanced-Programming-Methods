#include "Student.h"
#include <iostream>
#include <ostream>

Student::Student() {
    classRank = "None";
    gpa = 0.0;
    major = "NONE";
    minor = "NONE";
    credits = 0;
}

Student::Student(string Firstname, string Lastname, string Streetaddress, string City, string State, string Zipcode, string Phone, int Age, string ClassRank, float GPA, string Major, string Minor, int Credits) : Person(Firstname, Lastname, Streetaddress, City, State, Zipcode, Phone, Age) {

    classRank = ClassRank;
    gpa = GPA;
    major = Major;
    minor = Minor;
    credits = Credits;
}


void Student::printPersonalInfo() {
    cout << "S-T-U-D-E-N-T" << endl;
    cout << "_____________" << endl;
    Person::printPersonalInfo();
    printStudentInfo();

}

void Student::printStudentInfo() {
    cout << "STUDENT INFO" << endl;
    cout << classRank << " " << " " << "GPA:" << " " << gpa << endl;
    cout << major << " " << " " << " " << minor << endl;
    cout << "Total Credits :" <<  " " <<  credits << endl;
}




