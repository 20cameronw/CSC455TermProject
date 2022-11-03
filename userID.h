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
#include "stdlib.h"
#include "string"
using namespace std;

// Generate new UserID beginning with CID
// Followed by 10 numbers, and must be unique.
string userID() {
    string newID = "CID";                   // Begin every new userID with CID
    srand (time(NULL));                     // Seed the random number generator
    for(int i = 0; i < 10; i++) {           // Loop through 10 random numbers to give a unique ID
        newID += to_string(rand() % 10);    // Concatenate each number, after converting to string
    }                                       // End loop
    return newID;                           // Return unique UserID
}