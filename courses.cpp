//
//  courses.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/24/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "courses.h"
#include "classOfferings.h"

using namespace std;

/* The class Course will instantiate each course
 containing all data needed to produce the
 class offerings report.
*/

//Setter methods
void Course::setRubric(string rubric){
    m_rubric = rubric;
}
void Course::setCrse(int crse){
    m_crse = crse;
}
void Course::setSection(int section){
    m_section = section;
}

void Course::setCrn(int crn){
    m_crn = crn;
}

void Course::setName(string name){
    m_name = name;
}

void Course::setInstructorFname(string instructorFname){
    m_instructorFname = instructorFname;
}
void Course::setInstructorLname(string instructorLname){
    m_instructorLname = instructorLname;
}

void Course::setCourseDays(string days){
    m_days = days;
}

void Course::setTime(int time){
    m_time = time;
}

void Course::setSeats(int seats){
    m_seats = seats;
}

void Course::setNumStudents(int numStudents){
    m_numStudents = numStudents;
}

void Course::setOpenings(int openings){
    m_openings = openings;
}


//Getter methods
string Course::getRubric(){
    return m_rubric;
}
int Course::getCrse(){
    return m_crse;
}

int Course::getSection(){
    return m_section;
}

int Course::getCrn(){
    return m_crn;
}

string Course::getName(){
    return m_name;
}

string Course::getInstructorFname(){
    return m_instructorFname;
}

string Course::getInstructorLname(){
    return m_instructorLname;
}

string Course::getCourseDays(){
    return m_days;
}

int Course::getTime(){
    return m_time;
}

int Course::getSeats(){
    return m_seats;
}

int Course::getNumStudents(){
    return m_numStudents;
}

int Course::getOpenings(){
    return m_openings;
}








