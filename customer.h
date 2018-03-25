
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include<string>
#include "Date.h"
using namespace std;

class Customer{
public:
	//constructors, copy constructor, deconstructor
	Customer();
	Customer(string,string,string,int,int,int);
	Customer(const Customer&);
	~Customer();

	//getters
	string getName() const;
	string getAddress() const;
	string getTel() const;
	void printInfo() const;

	//setters
	void setName(string);
	void setAddress(string);
	void setTel(string);
	void setDate(int,int,int);

private:
	//all variable needed
	string name;
	string address;
	string tel;
	Date DoB; //date of birth
};



#endif /* CUSTOMER_H_ */
