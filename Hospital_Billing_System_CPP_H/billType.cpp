//billType.cpp

#include "billType.h"

//Create a function with default constructor

billType::billType(int id, double pharmacy, double doc_fee, double H_R_Charge)

{

	patientID = id;

	pharmacyCharges = pharmacy;

	doctorFee = doc_fee;

	roomCharges = H_R_Charge;

}

//State setpharmacyCharges fucntion

void billType::setpharmacyCharges(double pharmacy)

{

	pharmacyCharges = pharmacy;

}

//State getpharmacyCharges function

double billType::getpharmacyCharges() const

{

	return pharmacyCharges;

}

//Return type fucntion set doctor fees

void billType::setDoctorFee(double doc_fee)

{

	doctorFee = doc_fee;

}

//Get doctor fees

double billType::getDoctorFee() const

{

	return doctorFee;

}

//Set room charge

void billType::setRoomCharges(double H_R_Charge)

{

	roomCharges = H_R_Charge;

}

//Get the room charge

double billType::getRoomCharges() const

{

	return roomCharges;

}