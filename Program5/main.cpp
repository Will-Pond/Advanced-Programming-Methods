#include <fstream>
#include <iostream>
#include <vector>

#include "Faculty.h"
#include "Person.h"
#include "Student.h"
#include "TeachingAsst.h"

using namespace std;

int main() {
    vector<Person*> people;
    Person *P;
    Student *S;
    Faculty *F;
    TeachingAsst *T;

    string path;
    string type;
    vector<Person*>::iterator it;

    // Person members
    string firstname;
    string lastname;
    string streetaddress;
    string city;
    string state;
    string zipcode;
    string phone;
    int age;

    // Student members
    string classRank;
    float gpa;
    string major;
    string minor;
    int credits;

    // Faculty members
    string department;
    string office;
    string email;
    string officePhone;

    // TeachingAsst member
    int courseLoad;


    cout<<"Please enter a path to a data file :";
    cin>>path;
    cout<<"\n\n";

    ifstream inf(path);

    if (!inf.is_open()) {
        cerr<<"Error opening file"<<endl;
        return 1;
    }

    while(inf >> type) {
        inf >> firstname >> lastname >> streetaddress >> city >> state >> zipcode >> phone >> age;
        if(type == "S" || type == "T") {
            inf >> classRank >> gpa >> major >> minor >> credits;
            if(type == "S") {
               S = new Student(firstname, lastname, streetaddress, city, state, zipcode, phone, age,classRank, gpa, major, minor, credits);
                P = S;
            }
        }
        if(type == "F" || type == "T") {
            inf >> department >> office >>email >> officePhone;
            if(type == "F") {
                F = new Faculty(firstname, lastname, streetaddress, city, state, zipcode, phone, age, department, office, email, officePhone);
                P = F;
            }
        }
        if(type == "T") {
            inf >> courseLoad;
            T = new TeachingAsst(firstname, lastname, streetaddress, city, state, zipcode, phone, age, classRank, gpa, major, minor, credits, department, office, email, officePhone, courseLoad);
            P = T;
        }

        people.insert(people.end(), P);
    }

    inf.close();

    for(it = people.begin(); it != people.end(); it++) {
        (*it)->printPersonalInfo();
        cout<<endl<<endl;
    }


    return 0;
}
