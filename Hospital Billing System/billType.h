//billType.h

#ifndef billType_H

#define billType_H

#include<iostream>

#include<string>

using namespace std;

//Design Class billType

class billType

{

	//Members to Store a Patient’s ID, hospital charges, pharmacy charges for medicine, doctor's fee, and room charge

private:

	int patientID;

	double pharmacyCharges;

	double doctorFee;

	double roomCharges;

	//Add appropriate constructors and member functions to initialize, access, and manipulate the data members

public:

	billType(int patientID = 0, double pharmacyCharges = 0, double doctorFee = 0, double roomCharges = 0);

	void setpharmacyCharges(double pharmacyCharges);

	double getpharmacyCharges() const;

	void setDoctorFee(double doctorFee);

	double getDoctorFee() const;

	void setRoomCharges(double roomCharges);

	double getRoomCharges() const;

};

#endif 