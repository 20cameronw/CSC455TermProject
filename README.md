# CSC455TermProject
Tasks
CSC455: Software Quality Assurance
Fall 2022, Term project (Part I)
A re-configurable customer reward system Date Assigned: Thursday, October 19, 2022 Due Date: Friday, November 11, 2022 at 11:59 pm on blackboard (total: 500 points)
A customer reward system is a software that tracks the customer’s shopping behavior and reward points to the customer. the software provides the following services
1. Customer registration service: for a user to benefit from the reward service, the user needs to register. The customer needs to provide the following information:
(a) A user name:
i. Consists of at least eight characters, flowed by at most three numbers. ii. Must be unique
(b) First name
i. Must be a string no longer than 15 characters.
ii. Does not contain any numbers (0,1, ...) or other special characters (?, ¿, #, ...).
(c) Last name
i. Must be a string no longer than 15 characters.
ii. Does not contain any numbers (0,1, ...) or other special characters (?, ¿, #, ...).
(d) Date of birth
i. Must be in MM–DD–YYYY format. ii. MM, DD, and YYYY are numbers.
(e) Credit card number:
i. Must be unique.
ii. Must be in xxxx–xxxx–xxxx format.
iii. xxxx are numbers.
(f) The system will assign a unique user ID to each user. this ID should satisfy
i. Must be unique.
ii. Must start with ”CID”, followed with 10 digits.
(g) Reward points
1

. . .
i. Must be a positive number.
2. Product management: the shop manager should be able to add and remove products from inven- tory. Each product should have the following information
(a) Product ID:
i. Must start with ’P’ followed by a five-digit number. ii. Must be unique.
(b) Product name (description) (c) Product price
(d) The number product items currently available in store i. Must be a positive number.
3. Reward management: this service allows the manager to specify the following
(a) The number of points awarded for a given shopping amount.
(b) The gifts that can be redeemed given the total number of reward points.
4. A menu system that provide the following options
• Customer registration. • Customer Removal.
• Product addition.
• Product removal.
• Shopping.
• View customer using customer ID. • Redeem rewards.
5. All users information must be saved in a file named ”customers.txt” in the following format
customer 1 ID
customer 1 user name
customer 1 first name
customer 1 last name
customer 1 date of birth customer 1 total reward points
customer 2 ID
customer 2 user name
customer 2 first name
customer 2 last name
customer 2 date of birth customer 2 total reward points
  customer.txt file format
2

6. All products information must be saved in a file named products.txt in the following format
product 1 ID
product 1 name
product 1 price
product 1 total items in store
product 2 ID
product 2 name
product 2 price
product 2 total items in store
. . .
products.txt file format
7. All transactions must be saved in a file named transactions.txt” file in the following format
   Transaction ID
User ID
Product 1 ID , Product 2 ID , Total amount
Total reward points
Product
3 ID ...
. . .
 transactions.txt file format
8. The system should load any previously saved data.
9. The system should perform data validation for all input data.
Write a C++ code to implement this software application. Your code must follow the following guide- lines:
• No more than one statement per line.
• You must use block indentation.
• All nesting of if statements should not exceed a depth of three.
• All if statements must have an else statement.
• Each function must be documented by specifying the role of that function and the meaning of each parameter and return values.
• Functions code should not exceed 35 statements.
• The cyclomatic complexity of any function should not exceed 10.
• Must reuse functions as much as possible.
• The project should not be implemented in a single cpp file. You must have at least four files.
3

Submission
1. Make sure you writing you names on all files you submit.
2. Your code should compile and run under computer science server ada.missouristat.edu). 3. Enclose all your files in a folder named Project PartI Team#.zip.
4. Submit the zip file using blackboard.
4
