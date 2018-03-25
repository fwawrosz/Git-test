#include "customer.h"
#include <iostream>
#include <string>
using namespace std;
//default constructor
Customer::Customer(){
	name = "null";
	address = "null";
	tel = "null";
}
//constructor
Customer::Customer(string n,string a,string t,int d,int m, int y){
	name = n;
	address = a;
	tel = t;
	DoB.setDate(d,m,y);

}
//copy constructor
Customer::Customer(const Customer& ref){
	name = ref.name;
	address = ref.address;
	tel = ref.tel;
	DoB = ref.DoB;

}
//destructor
Customer::~Customer(){
//blank cause not using any pointed to destroy
}
//getters
string Customer::getName()const{
	return name;
}
string Customer::getAddress()const{
	return address;
}
string Customer::getTel()const{
	return tel;
}
//print all info
void Customer::printInfo() const{
	cout << "Name: " << name << endl << "Address: " << address << endl << "Tel: " << tel << endl;
	DoB.printDate();
}
//setters
void Customer::setName(string n){
	name = n;
}
void Customer::setAddress(string add){
	address = add;
}
void Customer::setTel(string t){
	tel = t;
}
void Customer::setDate(int d,int m, int y){
	DoB.setDate(d,m,y);
}

