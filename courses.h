//
//  courses.h
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/24/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/* The class Course will instantiate each course
 containing all data needed to produce the
 class offerings report.
*/

class Course
{
public:
    void setRubric(string);
    void setCrse(int);
    void setSection(int);
    void setCrn(int);
    void setName(string);
    void setInstructorFname(string);
    void setInstructorLname(string);
    void setCourseDays(string);
    void setTime(int);
    void setSeats(int);
    void setNumStudents(int);
    void setOpenings(int);
    
    string getRubric();
    int getCrse();
    int getSection();
    int getCrn();
    string getName();
    string getInstructorFname();
    string getInstructorLname();
    string getCourseDays();
    int getTime();
    int getSeats();
    int getNumStudents();
    int getOpenings();
    
private:
    string m_rubric;
    int m_crse;
    int m_section;
    int m_crn;
    string m_name;
    string m_instructorFname;
    string m_instructorLname;
    string m_days;
    int m_time;
    int m_seats;
    int m_numStudents;
    int m_openings;
    
};
