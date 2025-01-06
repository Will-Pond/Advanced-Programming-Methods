#pragma once
#include <string>

using namespace std;

class Person {
protected:
    string firstname;
    string lastname;
    string streetaddress;
    string city;
    string state;
    string zipcode;
    string phone;
    int age;
public:
    Person();
    Person(string Firstname, string Lastname, string Streetaddress, string City, string State, string Zipcode, string Phone, int Age);
    virtual void printPersonalInfo();
};
