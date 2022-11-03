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
#include <string>
using namespace std;

// Class to register user's information
class Registration {    // The class
    public:             // Access specifier
        string username;
        string firstName;
        string lastName;
        int dateOfBirth;
        int creditCardNumber;
        string uniqueUserID;
        int rewardPoints;
};
