//doctorType.cpp

#include "doctorType.h"

// Declare doctorType Constructor

doctorType::doctorType(string first, string last, string doctor_specialty)

{

	setName(first, last);

	specialty = doctor_specialty;

}

//Set Doctor Specialty

void doctorType::setSpecialty(string doctor_specialty)

{

	specialty = doctor_specialty;

}

// Get Doctor Specialty

string doctorType::getSpecialty()

{

	return specialty;

}
