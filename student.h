#ifndef STUDENT_H
#define STUDENT_H

#include <string>

enum DegreeProgram {
    SECURITY = 0,
    NETWORK = 1,
    SOFTWARE = 2
};

class Student {

    private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysToComplete[3];
    enum DegreeProgram degreeProgram;

    public:

    Student(
        std::string studentID,
        std::string firstName,
        std::string lastName,
        std::string email,
        int age, 
        int daysToComplete, 
        enum degreeProgram(int caseIndex));
    ~Student() = default;

    //getters
    std::string getStudentID();
    std::string getFirstName(); ;
    std::string getLastName();
    std::string getEmail();
    int getAge();
    int getDaysToComplete(int index);
    enum DegreeProgram getDegreeProgram();

    //setters
    void setFirstName(std::string fName);
    void setLastName(std::string lName);
    void setStudentID(std::string sID);
    void setEmail(std::string sEmail);
    void setAge(int sAge);
    void setDegreeProgram(enum sDegreeProgram);

 void Print(std::string message);

  


};

#endif