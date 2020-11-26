//
//  classOfferings.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/20/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "courses.h"

using namespace std;

int classOfferings(){
    
    //Total number of courses that will be in my vector
    const int max_size = 7;
    
    //Vector created to hold maximum of 7 courses with their given data
    vector <Course> courseOfferings;
    ifstream coursesFile;
    coursesFile.open("classOfferings.rtf");
    
    if (coursesFile.fail())
    {
        cout << "File not found." << endl;
        return 1;
    }
    
    return 0;
    
    
}


