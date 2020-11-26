//
//  menuSystem.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/09/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "reportsMenu.h"
#include "messaging.h"

using namespace std;

// Menu for user to choose what type of report they want
int reportsMenu(){
    
    int choice;
    
    // do while loop for user to exit program
    do
    {
        // Menu of all reports that can be performed by user
        cout <<"=======================================================" << endl;
        cout << "                     REPORTS MENU                     " << endl;
        cout << "=======================================================\n" << endl;
    
        
        // Menu choices
        cout << "\t0 - Quit" << endl;
        cout << "\t1 - Class Offerings" << endl;
        cout << "\t2 - Class Roster" << endl;
        cout << "\t3 - Class Attendance" << endl;
        cout << "\t4 - Class Grades" << endl;
        cout << "\t5 - Help\n" << endl;
    
        cout << "--> Enter your choice: " << endl;
        cin >> choice;
    
        switch (choice)
        {
            case 0:
            {
                cout << "You chose to exit the program." << endl;
                break;
            }
            case 1:
            {
                reportsMenu();
                break;
            }
            case 2:
            {
                reportsMenu();
                break;
            }
            case 3:
            {
                reportsMenu();
                break;
            }
            case 4:
            {
                reportsMenu();
                break;
            }
            case 5:
            {
                help();
                break;
            }
            default:
            {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    } while (choice != 0);
    
    return 0;
    
}

