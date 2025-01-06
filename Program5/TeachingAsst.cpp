#include "TeachingAsst.h"
#include <iostream>
#include <ostream>


TeachingAsst::TeachingAsst() {
     courseLoad = 0;
}

TeachingAsst::TeachingAsst(string Firstname, string Lastname, string Streetaddress, string City, string State, string Zipcode, string Phone, int Age, string ClassRank, float GPA, string Major, string Minor, int Credits, string Departement, string Office, string Email, string OfficePhone, int CourseLoad) : Person(Firstname, Lastname, Streetaddress, City, State, Zipcode, Phone, Age) , Student(Firstname, Lastname, Streetaddress, City, State, Zipcode, Phone, Age,ClassRank, GPA, Major, Minor, Credits) , Faculty(Firstname, Lastname, Streetaddress, City, State, Zipcode, Phone, Age, Departement, Office, Email, OfficePhone) {

     courseLoad = CourseLoad;
}


void TeachingAsst::printPersonalInfo() {
     cout << "T-E-A-C-H-I-N-G A-S-S-I-S-T-A-N-T" << endl;
     cout << "___________________________________" << endl;
     Person::printPersonalInfo();
     printStudentInfo();
     printFacultyInfo();
     cout << "TEACHING ASSISTANT INFO" << endl;
     cout << "Course Load :" << " " << courseLoad << endl;
}


