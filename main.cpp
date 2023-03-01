#include "OnCampusStudent.h"
#include "Employee.h"
#include "Commuter.h"
#include "Visitor.h"
#include "Car.h"
#include "Motercycle.h"
#include "Truck.h"
#include "ElectricVehicle.h"
#include "Invoice.h"

#include <iostream>
#include <string>
using namespace std;

int main() {

	//Start of Person class type variables
	int personInput;
	string userName;
	string userAddress;
	string userEmail;
	/*
delete: I am changing the ID variable to two variables since one is used for 
student ID and one is used for faculty ID.  I am not sure if they will 
take off points for putting it as one variable
	 */
	long long int userStudentID; 			//Option 1 
	string userOnCampusAdd; 				//Option 1
	long long int userFacultyID;			//Option 2
	long long int userWorkPhone;			//Option 2
	string userParkArea;						//Option 3
	long long int userSocialSecurity;	//Option 3
	long long int visitID;					//Option 4
	int parkingSpace;							//Option 4

	//Start of Vehicle class type variables
	int vehicleInput;
	string userMake;
	string userModel;
	int userYear;
	string userLicensePlate;	//Option 1
	string userColor;				//Option 1
	string userStateReg;			//Option 2 
	bool userLeased; 				//Option 2 
	int userNumWheels;			//Option 3
	string userFuelType;			//Option 3 
	string userHybrid;			//Option 4
	int userMilesLeft;			//Option 4

	//Start of Invoice variables
	string userPermitType;				//holds the permit type 
	bool employeeDisc = false;			//do they have an employee discount? Y/N
	bool electricDisc = false;			//do they have an electric vehicle? Y/N

	/*
delete: I changed the menu to fit my own programming style, you guys can 
change it back if you would like
	 */

	//Show user person type menu 
	cout << "Menu" << endl;
	cout << "1 - On-Campus Student" << endl;
	cout << "2 - Employee" << endl;
	cout << "3 - Commuter" << endl;
	cout << "4 - Visitor" << endl;
	cout << "Choose a number: ";

	cin >> personInput;

	//Questions based on what type of person they are
	if (personInput == 1) {
		//collect user input and store it in variables
		cout << "Enter first and last name: ";
		cin >> userName;
		//delete: deleted the endl that was here
		cout << "Enter address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter studentID: C";
		cin >> userStudentID;
		cout << "Enter on campus address: ";
		cin >> userOnCampusAdd;

	} else if (personInput == 2) {
		//collect user input and store it in variables
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "Enter billing address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter facultyID: ";
		cin >> userFacultyID;
		cout << "Enter work phone number: ";
		cin >> userWorkPhone;


		//set employee discount to true
		employeeDisc = true;

	} else if (personInput == 3) { 
		//collect user input and store it in variables
		cout << "Enter first and last name: ";
		//deleted \n that was here
		cin >> userName;
		cout << "\nEnter billing address: ";
		cin >> userAddress;
		cout << "\nEnter email: ";
		cin >> userEmail;
		cout << "\nEnter designated parking area: ";
		cin >> userParkArea;
		cout << "\nEnter your social security number with no dashes: ";
		cin >> userSocialSecurity;

		//add all variables to an object for that persons type 
		Commuter commuter1;

		//Call to set functions that set the objects variables
		commuter1.setName(userName);
		commuter1.setAddress(userAddress);
		commuter1.setEmail(userEmail);
		commuter1.setDesignatedParkingArea(userParkArea);
		commuter1.setSocialSecurity(userSocialSecurity);
	} else if (personInput == 4) {
		//collect user input and store it in variables
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "\nEnter billing address: ";
		cin >> userAddress;
		cout << "\nEnter email: ";
		cin >> userEmail;
		cout << "\nEnter visitor pass ID: ";
		cin >> visitID;
		cout << "\nEnter visitor parking space: ";
		cin >> parkingSpace;

		//add all variables to an object for that persons type 
		Visitor visitor1;

		//Call to set functions that set the objects variables
		visitor1.setName(userName);
		visitor1.setAddress(userAddress);
		visitor1.setEmail(userEmail);
		visitor1.setVisitorPassID(visitID);
		visitor1.setVisitorParkingSpace(parkingSpace);
	}
	/*
delete: I changed the menu to fit my own programming style, you guys can 
change it back if you would like
	 */
	//Show user vehicle menu
	cout << "Menu:" << endl;
	cout << "1 - Car" << endl;
	cout << "2 - Motorcycle" << endl;
	cout << "3 - Truck" << endl;
	cout << "4 - Electric Vehicle" << endl;
	cout << "Choose a number: ";

	cin >> vehicleInput;

	if (vehicleInput == 1) {
		//collect user input and store it in variables
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "\nEnter your vehicle model: ";
		cin >> userModel;
		cout << "\nEnter your vehicle year: ";
		cin >> userYear;
		cout << "\nEnter your license plate number: ";
		cin >> userLicensePlate;
		cout << "\nEnter vehicle color: ";
		cin >> userColor;

		//add all variables to an object for the vehicle type 
		Car vehicle1;

		//Call to set functions that set the objects variables
		vehicle1.setMake(userMake);
		vehicle1.setModel(userModel);
		vehicle1.setYear(userYear);
		vehicle1.setLicensePlate(userLicensePlate);
		vehicle1.setColor(userColor);

	} else if (vehicleInput == 2) {
		//collect user input and store it in variables
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "\nEnter your vehicle model: ";
		cin >> userModel;
		cout << "\nEnter your vehicle year: ";
		cin >> userYear;
		cout << "\nEnter your vehicle state registration number: ";
		cin >> userStateReg;
		cout << "\nState if your vehicle is leased: ";
		cin >> userLeased;

		//add all variables to an object for the vehicle type 
		Motorcycle vehicle2;

		//Call to set functions that set the objects variables
		vehicle2.setMake(userMake);
		vehicle2.setModel(userModel);
		vehicle2.setYear(userYear);
		vehicle2.setStateReg(userStateReg);
		vehicle2.setLeased(userLeased);

	} else if (vehicleInput == 3) {
		//collect user input and store it in variables
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "\nEnter your vehicle model: ";
		cin >> userModel;
		cout << "\nEnter your vehicle year: ";
		cin >> userYear;
		cout << "\nEnter the number of wheels your vehicle has: ";
		cin >> userNumWheels;
		cout << "\nEnter the fuel type your vehicle uses (diesel or gas): ";
		cin >> userFuelType;

		//add all variables to an object for the vehicle type 
		Truck vehicle3;

		//Call to set functions that set the objects variables
		vehicle3.setMake(userMake);
		vehicle3.setModel(userModel);
		vehicle3.setYear(userYear);
		vehicle3.setNumWheels(userNumWheels);
		vehicle3.setFuelType(userFuelType);

	} else if (vehicleInput == 4) {
		//collect user input and store it in variables
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "\nEnter your vehicle model: ";
		cin >> userModel;
		cout << "\nEnter your vehicle year: ";
		cin >> userYear;
		cout << "\nState if your vehicle is a hybrid or eletric: ";
		cin >> userHybrid;
		cout << "\nState the range left on your vehicle battery in miles: ";
		cin >> userMilesLeft;

		//add all variables to an object for the vehicle type 
		eletricVehicle vehicle4;

		//Call to set functions that set the objects variables
		vehicle4.setMake(userMake);
		vehicle4.setModel(userModel);
		vehicle4.setYear(userYear);
		vehicle4.setHybrid(userHybrid);
		vehicle4.setMilesLeft(userMilesLeft);

		//set electric vehicle discount boolean to true 
		employeeDisc = false;
	}

	//collect permit type from user 
	cout << "\nWhat is their permit type (annual or semester): ";
	cin >> userPermitType;

	// delete: put if statements in switch statement for cleaner code

	//add all variables to an object for the invoice 
	Invoice userInvoice;

	//Call to set functions that set the objects variables
	userInvoice.setEmployeeDiscount(employeeDisc);
	userInvoice.setElectricVehicleDiscount(electricDisc);
	userInvoice.setPermitPrice(userPermitType);
	//service charge does not change

	//call invoice method to calculate the total price 

	//display user information by calling Invoice member function

	//generate on campus students invoice
	if (personInput == 1) {
		//add all variables to an object for that persons type 
		OnCampusStudent student1;

		//Call to set functions that set the objects variables
		student1.setName(userName);
		student1.setAddress(userAddress);
		student1.setEmail(userEmail);
		student1.setStudentID(userStudentID);
		student1.setOnCampusAddress(userOnCampusAdd);
	
		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(student1);

	}	else if (personInput == 2)	{
		//add all variables to an object for that persons type 
		Employee employee1;

		//Call to set functions that set the objects variables
		employee1.setName(userName);
		employee1.setAddress(userAddress);
		employee1.setEmail(userEmail);
		employee1.setFacultyID(userFacultyID);
		employee1.setWorkPhone(userWorkPhone);
		Employee employee1;

		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(employee1);
	
	}	else if (personInput == 3)	{
		userInvoice.generateInvoice(commuter1);
	}	else if (personInput == 4)	{
		userInvoice.generateInvoice(visitor1);
	}

	if (vehicleInput == 1)
		userInvoice.generateInvoice(vehicle1);
	else if (vehicleInput == 2)
		userInvoice.generateInvoice(vehicle2);
	else if (vehicleInput == 3)
		userInvoice.generateInvoice(vehicle3);
	else if (vehicleInput == 4)
		userInvoice.generateInvoice(vehicle4);

	//trailing else for errors 
	else
		cout << "error";

	return 0;
}
