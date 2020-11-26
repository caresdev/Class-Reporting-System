//
//  messaging.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/09/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "messaging.h"

using namespace std;

//Welcoming and instructing user
void welcoming(){
    
    cout << "=======================================================" << endl;
    cout << "     Welcome to the San Jac Class Reporting System!" << endl;
    cout << "=======================================================\n" << endl;
    cout << "--> Choose from below what type of report you wish to\n";
    cout << "    perform, or choose quit to exit the program.\n\n" << endl;

}


//Extra user help
void help(){
    
    cout <<"=======================================================" << endl;
    cout << "                     HELP SECTION" << endl;
    cout << "=======================================================\n" << endl;
    
    cout << "--> The information provided is only valid for the" << endl;
    cout << "    current semester.\n" << endl;
    cout << "--> You first need to choose a report in oder to" << endl;
    cout << "    choose a specific class.\n" << endl;

}


