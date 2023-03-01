//include all needed .h files 
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
	long long int userStudentID; 			//Option 1 
	string userOnCampusAdd; 				//Option 1
	long long int userFacultyID;			//Option 2
	long long int userWorkPhone;			//Option 2
	string userParkArea;					//Option 3
	long long int userSocialSecurity;	    //Option 3
	long long int visitID;					//Option 4
	int parkingSpace;						//Option 4 

	//Start of Vehicle class type variables
	int vehicleInput;
	string userMake;
	string userModel;
	int userYear;
	string userLicensePlate;	//Option 1
	string userColor;			//Option 1
	string userStateReg;		//Option 2 
	bool userLeased; 			//Option 2 
	int userNumWheels;			//Option 3
	string userFuelType;		//Option 3 
	string userHybrid;			//Option 4
	int userMilesLeft;			//Option 4

	//Start of Invoice variables
	string userPermitType;				
	bool employeeDisc = false;			
	bool electricDisc = false;			

	//Show user person type menu 
	cout << "Menu" << endl;
	cout << "1 - On-Campus Student" << endl;
	cout << "2 - Employee" << endl;
	cout << "3 - Commuter" << endl;
	cout << "4 - Visitor" << endl;
	cout << "Choose a number: ";

	cin >> personInput;

/******************************************************************************
                    The First Section of if Statements
        Purpose: output to user their options, get input and store it 
            into corresponding variables for each person type. 
        Purpose: if the person is an employee, set the employee discount 
                          boolean variable to true.
*******************************************************************************/

	if (personInput == 1) {         //On-Campus Student
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "Enter address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter studentID: C";
		cin >> userStudentID;
		cout << "Enter on campus address: ";
		cin >> userOnCampusAdd;

	} else if (personInput == 2) {         //Employee
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "Enter address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter facultyID: ";
		cin >> userFacultyID;
		cout << "Enter work phone number with no dashes or parenthesis: ";
		cin >> userWorkPhone;
		
		employeeDisc = true;        //set employee discount to true

	} else if (personInput == 3) {      //Commuter 
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "Enter address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter designated parking area: ";
		cin >> userParkArea;
		cout << "Enter your social security number with no dashes: ";
		cin >> userSocialSecurity;

	} else if (personInput == 4) {
		cout << "Enter first and last name: ";
		cin >> userName;
		cout << "Enter address: ";
		cin >> userAddress;
		cout << "Enter email: ";
		cin >> userEmail;
		cout << "Enter visitor pass ID: ";
		cin >> visitID;
		cout << "Enter visitor parking space: ";
		cin >> parkingSpace;
		
	}

	//Show user vehicle menu
	cout << "Menu:" << endl;
	cout << "1 - Car" << endl;
	cout << "2 - Motorcycle" << endl;
	cout << "3 - Truck" << endl;
	cout << "4 - Electric Vehicle" << endl;
	cout << "Choose a number: ";

	cin >> vehicleInput;
	
/******************************************************************************
                    The Second Section of if Statements
        Purpose: output to user their options, get input and store it 
            into corresponding variables for each person type. 
        Purpose: if the person has an electric vehicle, set the electric 
                    vehicle boolean variable to true.
*******************************************************************************/

	if (vehicleInput == 1) {
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "Enter your vehicle model: ";
		cin >> userModel;
		cout << "Enter your vehicle year: ";
		cin >> userYear;
		cout << "Enter your license plate number: ";
		cin >> userLicensePlate;
		cout << "Enter vehicle color: ";
		cin >> userColor;

	} else if (vehicleInput == 2) {
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "Enter your vehicle model: ";
		cin >> userModel;
		cout << "Enter your vehicle year: ";
		cin >> userYear;
		cout << "Enter your vehicle state registration number: ";
		cin >> userStateReg;
		cout << "State if your vehicle is leased: ";
		cin >> userLeased;

	} else if (vehicleInput == 3) {
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "Enter your vehicle model: ";
		cin >> userModel;
		cout << "Enter your vehicle year: ";
		cin >> userYear;
		cout << "Enter the number of wheels your vehicle has: ";
		cin >> userNumWheels;
		cout << "Enter the fuel type your vehicle uses (diesel or gas): ";
		cin >> userFuelType;

	} else if (vehicleInput == 4) {
		cout << "Enter your vehicle manufacturer: ";
		cin >> userMake;
		cout << "Enter your vehicle model: ";
		cin >> userModel;
		cout << "Enter your vehicle year: ";
		cin >> userYear;
		cout << "State if your vehicle is a hybrid or eletric: ";
		cin >> userHybrid;
		cout << "State the range left on your vehicle battery in miles: ";
		cin >> userMilesLeft;

		//set electric vehicle discount boolean to true 
		employeeDisc = false;
	}

	//collect permit type from user 
	cout << "What is their permit type (enter annual or semester): ";
	cin >> userPermitType;

    //create an invoice object 
	Invoice userInvoice;
	
	//set the invoice object's class from variables gathered in if statements
	userInvoice.setEmployeeDiscount(employeeDisc);
	userInvoice.setElectricVehicleDiscount(electricDisc);
	userInvoice.setPermitPrice(userPermitType);
	//service charge does not change, therefore it does not need to be set

/******************************************************************************
                    The Third Section of if Statements:
    Purpose: create objects that respresent the person's type (ex. employee)
        Purpose: use setter functions to set the variables of the object
        Purpose: call generate invoice to output information from the object
    Note: the third and fourth if statements are not grouped with the first
    and second, for the purpose of accuately calculating price and the 
                                output of data.
*******************************************************************************/

	if (personInput == 1) {
		OnCampusStudent student1;

		student1.setName(userName);
		student1.setAddress(userAddress);
		student1.setEmail(userEmail);
		student1.setStudentID(userStudentID);
		student1.setOnCampusAddress(userOnCampusAdd);
	
		userInvoice.generateInvoice(student1);

	}	else if (personInput == 2)	{
		Employee employee1;
		
		employee1.setName(userName);
		employee1.setAddress(userAddress);
		employee1.setEmail(userEmail);
		employee1.setFacultyID(userFacultyID);
		employee1.setWorkPhone(userWorkPhone);

		userInvoice.generateInvoice(employee1);
	
	}	else if (personInput == 3)	{
		Commuter commuter1;

		commuter1.setName(userName);
		commuter1.setAddress(userAddress);
		commuter1.setEmail(userEmail);
		commuter1.setDesignatedParkingArea(userParkArea);
		commuter1.setSocialSecurity(userSocialSecurity);
		
		userInvoice.generateInvoice(commuter1);
	}	else if (personInput == 4)	{
		Visitor visitor1;

		visitor1.setName(userName);
		visitor1.setAddress(userAddress);
		visitor1.setEmail(userEmail);
		visitor1.setVisitorPassID(visitID);
		visitor1.setVisitorParkingSpace(parkingSpace);
		
		userInvoice.generateInvoice(visitor1);
	} else {
	    cout << "error" << endl;
	}

/******************************************************************************
                    The Third Section of if Statements:
    Purpose: create objects that respresent the person's vehicle (ex. car)
        Purpose: use setter functions to set the variables of the object
        Purpose: calculate the price by calling calcTotalPrice() 
        Purpose: call generate invoice to output information from the object 
                                  and the price
*******************************************************************************/

	if (vehicleInput == 1) {
		Car vehicle1;

		vehicle1.setMake(userMake);
		vehicle1.setModel(userModel);
		vehicle1.setYear(userYear);
		vehicle1.setLicensePlate(userLicensePlate);
		vehicle1.setColor(userColor);
		
		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(vehicle1);

	 } else if (vehicleInput == 2) {
		Motorcycle vehicle2;

		vehicle2.setMake(userMake);
		vehicle2.setModel(userModel);
		vehicle2.setYear(userYear);
		vehicle2.setStateReg(userStateReg);
		vehicle2.setLeased(userLeased);
		
		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(vehicle2);
		
	} else if (vehicleInput == 3) {
		Truck vehicle3;

		vehicle3.setMake(userMake);
		vehicle3.setModel(userModel);
		vehicle3.setYear(userYear);
		vehicle3.setNumWheels(userNumWheels);
		vehicle3.setFuelType(userFuelType);
		
		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(vehicle3);
	} else if (vehicleInput == 4) {
		eletricVehicle vehicle4;

		vehicle4.setMake(userMake);
		vehicle4.setModel(userModel);
		vehicle4.setYear(userYear);
		vehicle4.setHybrid(userHybrid);
		vehicle4.setMilesLeft(userMilesLeft);
		userInvoice.calcTotalPrice();
		userInvoice.generateInvoice(vehicle4);

	//trailing else for errors 
	} else {
		cout << "error";
	}
	
	return 0;
}

