#include "registration.h"
#include <iostream>
using namespace std;

void Registration :: setUserID()
{
    cout >> "Input user id: "; 
    string user_id;
    cin >> user_id;
    userID = user_id;
}

void Registration :: setUsername()
{
    cout << "A user name:\n";
    cout << "* Consists of at least eight characters, followed by at most three numbers.\n";
    cout << "* Must be unique.\n";
    string userName;
    cin >> userName;    // Get user's input for userName
    username = userName;    // Return the userName
}

void Registration :: setFirstName()
{
    cout << "A first name:\n";
    cout << "* Must be a string no longer than 15 characters.\n";
    cout << "* Does not contain any numbers (0,1, ...) or other special characters (?, ¿, #, ...).\n";
    string first;
    cin >> first;    // Get user's input for firstName
    firstName = first;    // Return the firstName
}

void Registration :: setLastName()
{
    cout << "A last name:\n";
    cout << "* Must be a string no longer than 15 characters.\n";
    cout << "* Does not contain any numbers (0,1, ...) or other special characters (?, ¿, #, ...).\n";
    string last;
    cin >> last;    // Get user's input for lastName
    lastName = last;    // Return the lastName
}

void Registration :: setDOB()
{
    cout << "A date of birth:\n";
    cout << "* Must be in MM–DD–YYYY format.\n";
    cout << "* MM, DD, and YYYY are numbers.\n";
    string dob;
    cin >> dob;    // Get user's input for date of birth
    dateOfBirth = dob;    // Return the date of birth
}

void Registration :: setCCNumber()
{
    cout << "A credit card number:\n";
    cout << "* Must be unique.\n";
    cout << "* Must be in xxxx–xxxx–xxxx format.\n";
    cout << "* xxxx are numbers.\n";
    string CCNumber;
    cin >> CCNumber;    // Get user's input for credit card number.
    creditCardNumber = CCNumber;    // Return the credit card number.
}

string Registration :: getUsername() const
{
    return username;
}