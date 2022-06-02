//Hospital Billing System.cpp : This file contains the 'main' function. Program execution begins and ends there

#include<iostream>

#include "doctorType.h"

#include "patientType.h"

#include "dateType.h"

#include "billType.h"

using namespace std;

    //Create a main function

int main()

{

	//Doctor File

	doctorType doctor("Peter", "Adams", "Urologist");

	cout << "**********************************" << endl;

	cout << "**       Doctor Details         **" << endl;

	cout << "**********************************" << endl;

	cout << "Dr.Name : " << doctor.getFirstName() << " " << doctor.getLastName() << endl;

	cout << "Specialty : " << doctor.getSpecialty() << endl;

	cout << endl;

	//Patient Admin Info

	dateType dateOfBirth(9, 1, 1993);

	dateType adminDate(7, 6, 2020);

	dateType dischargeDate(10, 8, 2020);

	
	//Stating Patient Info

	patientType patient("Glen", "Maxwell", 31287, 28, dateOfBirth, adminDate, dischargeDate, doctor);

	
	//Displaying Patient Info

	cout << "**********************************" << endl;

	cout << "**       Patient Details        **" << endl;

	cout << "**********************************" << endl;

	cout << "Patient Name : " << patient.getFirstName() << " " << patient.getLastName() << endl;

	cout << "Patient ID :" << patient.getPatientID() << endl;

	cout << "Age : " << patient.getAge() << endl;

	cout << "Date Of Birth :";

	patient.getDOB().printDate();

	cout << endl;

	cout << endl;

	cout << "**********************************" << endl;

	cout << "**        Admission Details     **" << endl;

	cout << "**********************************" << endl;

	cout << "\nAdmission Date :";

	patient.getAdminDate().printDate();

	cout << "\nDischarge Date :";

	patient.getDischargeDate().printDate();

	cout << "\nDoctor Name :" << patient.getPhysicianName() << endl;

	cout << endl;

	//Stating Patient Bill Info

	billType patientBill(31287, 250000, 1200, 24000);

	//Display Patient Info

	cout << "**********************************" << endl;

	cout << "**       Billing Details        **" << endl;

	cout << "**********************************" << endl;

	cout << "Medication Cost: " << patientBill.getpharmacyCharges() << endl;

	cout << "Doctor Charges: " << patientBill.getDoctorFee() << endl;

	cout << "Room Charges: " << patientBill.getRoomCharges() << endl;

	cout << "Total Hospital Charge : " << patientBill.getpharmacyCharges() + patientBill.getDoctorFee() + patientBill.getRoomCharges() << endl;

	return 0;

}