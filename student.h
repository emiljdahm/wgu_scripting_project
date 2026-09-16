#include <string>
#include <iostream>

class Student {

    private:
    std::string studentID = "n/a";
    std::string firstName = "n/a";
    std::string lastName = "n/a";
    std::string email = "n/a";
    int age = 0;
    int daysToComplete[3] = {0, 0, 0};
    std::string degreeProgram = "n/a";

    //getters
    

    std::string getStudentID() const {
        return studentID;
    }
    std::string getFirstName() const {
        return firstName;
    }
    std::string getLastName() const {
        return lastName;    
    }
    std::string getEmail() const {
        return email;
    }
    int getAge() const {
        return age;
    }
    int getDaysToComplete(int index) const {
        return daysToComplete[index];
    }
    std::string getDegreeProgram() const {
        return degreeProgram;
    }
    //setters
    
    void setFirstName(std::string fName){
        this->firstName = fName;

    }
    void setLastName(std::string lName){
        this->lastName = lName;
    }
    void setStudentID(std::string sID){
        this->studentID = sID;
    }
    void setEmail(std::string sEmail){
        this->email = sEmail;
    }void setAge(int sAge){
        this->age = sAge;
    }void getDegreeProgram(std::string sDegreeProgram){
        this->degreeProgram = sDegreeProgram;

    }

    // constructors
    Student(int studentID,std::string firstName,std::string lastName,std::string email,int age,int daysToComplete = {},std::string degreeProgram){


        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->daysToComplete = daysToComplete;
        this->degreeProgram = degreeProgram;
    }
    void Print(std::string message){

       std::cout << message << std::endl;

    }


};