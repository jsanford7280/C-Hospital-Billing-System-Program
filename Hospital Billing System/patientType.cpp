// patientType.cpp

#include <iostream>

#include "patientType.h"

// Defualt constructor

patientType::patientType(string first, string last, int id, int patient_age, dateType dob, dateType admin_Date, dateType discharge_Date, doctorType doctor_)

{

	setName(first, last);

	patientID = id;

	age = patient_age;

	dateOfBirth = dob;

	adminDate = admin_Date;

	dischargeDate = discharge_Date;

	doctor = doctor_;

}

//Set the method for Patient Id

void patientType::setPatientID(int id)

{

	patientID = id;

}

//Set the Age

void patientType::setAge(int age_)

{

	age = age_;

}

//Set the Date of Birth

void patientType::setDOB(dateType dob)

{

	dateOfBirth = dob;

}

//Set Admin Date

void patientType::setAdminDate(dateType admin_Date)

{

	adminDate = admin_Date;

}

//Set Discharge Date

void patientType::setDischargeDate(dateType discharge_Date)

{

	dischargeDate = discharge_Date;

}

//Get setPhysicianName 

void patientType::setPhysicianName(doctorType doctor_)

{

	doctor = doctor_;

}

//Get the patient id

int patientType::getPatientID()

{

	return patientID;

}

//Get Patient Age

int patientType::getAge()

{

	return age;

}

//Get Date of Birth

dateType patientType::getDOB()

{

	return dateOfBirth;

}

//Get Admin Date

dateType patientType::getAdminDate()

{

	return adminDate;

}

//Get Discharge Date

dateType patientType::getDischargeDate()

{

	return dischargeDate;

}

//Get the getPhysicianName

string patientType::getPhysicianName()

{

	return doctor.getFirstName().append(" " + doctor.getLastName());

}