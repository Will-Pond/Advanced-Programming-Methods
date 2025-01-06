#include "Person.h"
#include <iostream>
#include <ostream>

Person::Person() {
    firstname = "FIRST";
    lastname = "LAST";
    streetaddress = "NONE";
    city = "NONE";
    state = "NONE";
    zipcode = "00000";
    phone = "000-000-0000";
    age = 0;
}

Person::Person(string Firstname, string Lastname, string Streetaddress, string City, string State, string Zipcode, string Phone, int Age) {
    firstname = Firstname;
    lastname = Lastname;
    streetaddress = Streetaddress;
    city = City;
    state = State;
    zipcode = Zipcode;
    phone = Phone;
    age = Age;
}

void Person::printPersonalInfo() {
    cout << "PERSONAL INFO" << endl;
    cout << lastname << "," << " " << firstname << endl;
    cout << streetaddress << endl;
    cout << city << "," << " "<< state << " " << " " << zipcode << endl;
    cout << phone << " " << " " << " " << "AGE:" << " " << age << endl;
}


