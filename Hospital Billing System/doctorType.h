//doctorType.h

#ifndef doctorType_H

#define doctorType_H

#include<iostream>

#include<string>

#include "personType.h"

using namespace std;

//Design Class doctorType,

//Inherited from Class personType

class doctorType : public personType

{
    //Additional Data Member to Store a Doctor’s Specialty

private:

    string specialty;

public:

    //Adding appropriate constructors and member functions to initialize, access, and manipulate the data members

    doctorType(string first = "", string last = "", string specialty = "");

    void setSpecialty(string specialty);

    string getSpecialty();

};

#endif 