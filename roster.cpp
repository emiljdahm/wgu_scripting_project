#include "roster.h"
#include <iostream>
#include <string>
#include <vector>


int classRosterArray[] = {}; // holds studentData table

int* arrPtr = classRosterArray;

class Roster {
    private:

    public:
    void add(std::string studentID,
        std::string firstName,
        std::string lastName,
        std::string email,
        int age,
        int daysInCourse1,
        int daysInCourse2,
        int daysInCourse3,
        enum DegreeProgram degreeProgram
    ){
        //add user details 
    };
    void remove(studentID){
        //remove student based on ID, if !== id then skip, if no id exist, print error
        if(studentID == )
    };
    void printAll(){
        //loop through all students and call print()
    };
    void printAverageDaysInCourse(){
        //print avg days in three courses based on student ID
    };
    void printInvalidEmails(){
        // loop throug all emails and print any invalid emails
    };
    void printByDegreeProgram(DegreeProgram degreeProgram){
        //print out enum data type for degree program
    }

};