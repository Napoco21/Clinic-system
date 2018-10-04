#include <iostream>
#include "Patient.h"
#include <string>

using namespace std;

//Create default patient with default values.
Patient::Patient()
{

    careCard="0000000000";
    name="to be entered";
	address="to be entered";
	phone="to be entered";
	email="to be entered";
}

//insert carecard number.

Patient::Patient(string aCareCard){
int len=aCareCard.length();
if(len!=10)
{
    careCard="0000000000";
name="to be entered";
	address="to be entered";
	phone="to be entered";
	email="to be entered";
}
else
{
    careCard=aCareCard;
name="to be entered";
	address="to be entered";
	phone="to be entered";
	email="to be entered";

}
}

//get name of the patient
string Patient::getName() const{

return name;
}

//get the adress of the patient
string Patient::getAddress() const{

return address;

}

	//get phone number of patient
	string Patient::getPhone() const{

	return phone;
	}

	// get email.
	string Patient:: getEmail() const{

	return email;

	}

	// get carecard numbers
	string Patient:: getCareCard() const
{

    return careCard;
}

//set name of the patient
void Patient:: setName(const string aName){

name=aName;

}

	// Sets the patient's address.
	void Patient::  setAddress(const string anAddress){

	address=anAddress;
	}

	// Sets the patient's phone number.
	void Patient::setPhone(const string aPhone)
	{
	 phone=aPhone;
	}

	//Sets the patient's email.
	void Patient::  setEmail(const string anEmail)
	{
	   email=anEmail;
	}

	//compare carecard numbers.

bool Patient::  operator==(const Patient & rhs)
{
    if(careCard.compare(rhs.careCard))
        return true;
    else
        return false;
}

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
	//              Returns true if the care card number of "this" Patient object is > the care card number of "rhs" Patient object.
bool Patient:: operator>(const Patient & rhs)
{

	if(careCard>(rhs.careCard))
        return true;
    else
        return false;


}

// Description: Prints the content of "this" patient.

void Patient:: printPatient( )
{

cout<<careCard<<", "<<"Patient: "<<name<<", "<<address<<", "<<phone<<", "<<email<<endl;

}
