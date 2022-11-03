/*
• No more than one statement per line.
• You must use block indentation.
• All nesting of if statements should not exceed a depth of three.
• All if statements must have an else statement.
• Each function must be documented by specifying the role of that function and the meaning of
each parameter and return values.
• Functions code should not exceed 35 statements.
• The cyclomatic complexity of any function should not exceed 10.
• Must reuse functions as much as possible.
• The project should not be implemented in a single cpp file. You must have at least four files.
*/
#include <iostream>
#include <string>
using namespace std;

// Function to get date of birth for registration.
// Prompt user, store input in variable, return variable
string getDOB() {
    cout << "A date of birth:\n";
    cout << "* Must be in MM–DD–YYYY format.\n";
    cout << "* MM, DD, and YYYY are numbers.\n";
    string dob;
    cin >> dob;    // Get user's input for date of birth
    return dob;    // Return the date of birth
}