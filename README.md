# Git-test
COEN 244 (Winter 2018) - Assignment 1

Q1. (25 marks) Create a class called Customer that has the following data
members:
Name (string)
- Address (string)
- Tel (string)
- Date of birth (This should be an object of the class Date that will need to
be created. A date is identified by three integers that represent the day,
month, and year)
The class should have at least the following member functions:
- One or more constructors
- Changing the customer’s address
- Changing the customer’s telephone
- Modifying the customer’s date of birth
- Printing information about a customer
- A destructor
Create a driver to test the class Customer.
Q2. (25 marks) Create a class called Room to represent a hotel room. The class has
the following data members:
- Room number ( of type integer)
- Room type that can be one of the following two values: Regular or Suite
- Room availability (Boolean). This attribute is true if the room is available;
false otherwise
The class should have at least the following member functions:
- One or more constructors
- Checking if a room is available
- Returning the room type
- A function that prints information about a customer
- A destructor
Create a driver to test the class Room.
Q3. (25 marks) Create a class called Reservation that holds reservations of
customers. Customers must be assigned rooms during reservation. Assume that a
customer can reserve only one room for a given date. The class will have the
following data members:
- Reservation number ( int)
- Customer ( of type Customer)
- Room ( of type Room)
- Customer arrival date to the hotel ( of type Date)
- Requested duration of the stay in number of nights (integer)
The class should have at least the following member functions:
- One or more constructors
- Assigning a room to a customer
- Returning the room number
- Returning the customer name
- A function that prints information about a reservation
- A destructor
Create a driver to test the class Reservation.
Q4. (25 marks) Create a class called Hotel to represent the hotel for which the
system is created. The class has the following data members:
- Name (string)
- Address (string)
- Number of rooms (integer)
- Rooms (a collection of rooms)
The class should have at least the following member functions:
- One or more constructors
- Outputting the rooms where their occupation status on a given date
- Outputting the list of customers that reserved rooms based on a date
interval
- Outputting the list of customers that reserved rooms of type Suite based
on a date interval
- Outputting the list of customers that reserved rooms of type Regular
based on a date interval
- Outputting the list of customers whose stay duration is more than or
equal to an input number x
- A function that prints information about a hotel
- A destructor
Create a driver to test the class Hotel
