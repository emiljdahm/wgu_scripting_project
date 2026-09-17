#include <string>
#include <iostream>
#include "student.h"


   Student::Student(
      std::string studentID,
      std::string firstName,
      std::string lastName,
      std::string email,
      int age,
      int daysToComplete[],
     //enum degreeProgram
   ){
      
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        for(int i=0; i<3; i++){
            this->daysToComplete[i] = daysToComplete[i];
        }
       // this->degreeProgram = enum DegreeProgram(degreeProgram);
   }




    void Student::Print(std::string message){

       std::cout << message << std::endl;

    }

    std::string Student::getStudentID(){
        return studentID;
    }
    std::string Student::getFirstName(){
        return firstName;
    }
    std::string Student::getLastName() {
        return lastName;    
    }
    std::string Student::getEmail()  {
        return email;
    }
    int Student::getAge()  {
        return age;
    }
    int Student::getDaysToComplete(int index)  {
        return daysToComplete[index];
    }
    enum DegreeProgram Student::getDegreeProgram() {
        return degreeProgram;
    }
    //setters
    
    void Student::setFirstName(std::string fName){
        this->firstName = fName;

    }
    void Student::setLastName(std::string lName){
        this->lastName = lName;
    }
    void Student::setStudentID(std::string sID){
        this->studentID = sID;
    }
    void Student::setEmail(std::string sEmail){
        this->email = sEmail;
    }
    void Student::setAge(int sAge){
        this->age = sAge;
    }
    // enunm