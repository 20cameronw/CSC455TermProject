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

// Function to get first name for registration.
// Prompt user, store input in variable, return variable
string getFirstName() {
    cout << "A first name:\n";
    cout << "* Must be a string no longer than 15 characters.\n";
    cout << "* Does not contain any numbers (0,1, ...) or other special characters (?, ¿, #, ...).\n";
    string firstName;
    cin >> firstName;    // Get user's input for firstName
    return firstName;    // Return the firstName
}