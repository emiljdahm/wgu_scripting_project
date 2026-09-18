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
        void setDegreeProgram(int caseIndex)
    ~Student() = default;

    //getters
    std::string getStudentID();
    std::string getFirstName(); ;
    std::string getLastName();
    std::string getEmail();
    int getAge();
    int getDaysToComplete(int index);
    void setDegreeProgram(int caseIndex);

    //setters
    void setFirstName(std::string fName);
    void setLastName(std::string lName);
    void setStudentID(std::string sID);
    void setEmail(std::string sEmail);
    void setAge(int sAge);
    void setDegreeProgram(int caseIndex);

 void Print(std::string message);

  


};

#endif