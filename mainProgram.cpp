//
//  main.cpp
//  Class Reporting System
//
//  Created by Gleici Caroline Pereira on 11/09/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "messaging.h"
#include "reportsMenu.h"
#include "coursesMenu.h"
#include "courses.h"
#include "classOfferings.h"
#include "classSection.h"


using namespace std;

int main() {
    
    // Calling function to welcome user
    welcoming();
    
    //Calling function to output menu of reports
    reportsMenu();
    
    
    
    
    
    return 0;
    
}
