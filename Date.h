
#ifndef DATE_H_
#define DATE_H_
#include<iostream>
using namespace std;

class Date{
public:
	Date(); // default constructor
	Date(int,int,int); //constructor
	void setDate(int,int,int); //setter
	void printDate() const; //print date info
private:
	//all vars
	int day, month, year;

};




#endif /* DATE_H_ */
