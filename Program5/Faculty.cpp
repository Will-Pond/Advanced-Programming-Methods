#include "Faculty.h"
#include <iostream>
#include <ostream>

Faculty::Faculty() {
     department = "NONE";
     office = "NONE";
     email = "NONE";
     officePhone = "NONE";
}

Faculty::Faculty(string Firstname, string Lastname, string Streetaddress, string City, string State, string Zipcode, string Phone, int Age, string Departement, string Office, string Email, string OfficePhone) : Person(Firstname, Lastname, Streetaddress, City, State, Zipcode, Phone, Age) {

    department = Departement;
    office = Office;
    email = Email;
    officePhone = OfficePhone;
}


void Faculty::printPersonalInfo() {
    cout << "F-A-C-U-L-T-Y" << endl;
    cout << "_____________" << endl;
    Person::printPersonalInfo();
    printFacultyInfo();
}

void Faculty::printFacultyInfo() {
    cout << "FACULTY INFO" << endl;
    cout << email << endl;
    cout << department << endl;
    cout << "Office :" << " " << office << " " << "Office Phone :" << " " << officePhone << endl;
}





