#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

using namespace std;

// Class to register user's information
class Registration {  
    private:
        //we should obviously change these data types later 
        string username;
        string firstName;
        string lastName;
        string dateOfBirth;
        string creditCardNumber;
        string userID;
        int rewardPoints;  

    public:
        //setters             
        void setUsername();
        void setFirstName();
        void setLastName();
        void setDOB();
        void setCCNumber();
        void setUserID();

        //getters
        std::string getUsername() const;
};

#endif