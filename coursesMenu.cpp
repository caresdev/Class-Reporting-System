//
//  coursesMenu.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/25/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "reportsMenu.h"
#include "messaging.h"
#include "coursesMenu.h"

using namespace std;

// Menu for user to specify what course section they want the report to be performed.
int coursesMenu()
{
    int courseChoice;
    
    cout << "-----------------------COURSES MENU----------------------\n" << endl;
    
    cout << "\t0 - Quit" << endl;
    cout << "\t1 - COSC-2325" << endl;
    cout << "\t2 - PHYS-2125" << endl;
    cout << "\t3 - CHEM-1111" << endl;
    cout << "\t4 - MATH-2414" << endl;
    cout << "\t5 - ITSC-1319" << endl;
    cout << "\t6 - ECON-1301\n" << endl;
    cout << "\t7 - BIOL-1306\n" << endl;
    
    cout << "Choose the course section: " << endl;
    cin >> courseChoice;
    
    switch (courseChoice) {
        case 0:
            cout << "You chose to exit the program. Goodbye!" << endl;
            break;
        case 1:
            cout << "You chose Computer Organization." << endl;
            break;
        case 2:
            cout << "You chose University Physics." << endl;
            break;
        case 3:
            cout << "You chose General Chemistry." << endl;
            break;
        case 4:
            cout << "You chose Calculus II." << endl;
            break;
        case 5:
            cout << "You chose Web Page Development." << endl;
            break;
        case 6:
            cout << "You chose Introduction to Economics." << endl;
            break;
        case 7:
            cout << "You chose Biology for Science Majors." << endl;
            break;
        default:
            break;
    }
    
    return 0;
}

