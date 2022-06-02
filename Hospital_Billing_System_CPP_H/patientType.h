//patientType.h

#ifndef patientType_H

#define patientType_H

#include<iostream>

#include<string>

#include "personType.h"

#include "dateType.h"

#include "doctorType.h"

using namespace std;

//Design theclasspatientType

//Inherited from the Class Person Type

class patientType :public personType

{

	//Additional data to store a Patient’s ID, Age, Date of Birth, Attending physician’s name, Date when the patient was admitted in the hospital, and Date when the patient was discharged from the hospital

private:

	int patientID;

	int age;

	dateType dateOfBirth;

	dateType adminDate;

	dateType dischargeDate;

	doctorType doctor;

	//Add appropriate constructors and member functions to initialize, access, and manipulate the data members.

public:

	patientType(string first, string last, int patientID, int age, dateType dateOfBirth, dateType adminDate, dateType dischargeDate, doctorType doctor);

	void setPatientID(int id);

	int getPatientID();

	void setAge(int age);

	int getAge();

	void setDOB(dateType dob);

	dateType getDOB();

	void setAdminDate(dateType admitDate);

	dateType getAdminDate();

	void setDischargeDate(dateType dischargeDate);

	dateType getDischargeDate();

	void setPhysicianName(doctorType doctor);

	string getPhysicianName();

};

#endif 