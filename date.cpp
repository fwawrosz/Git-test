#include "Date.h"
#include <iostream>
using namespace std;
//default constructor
Date::Date(){
	day = 1;
	month = 1;
	year = 2018;
}
//constructor
Date::Date(int d, int m, int y){
	day = (d >= 0 && d <= 31) ? d : 1;
	month = (m >= 0 && m <= 12) ? m : 1;
	year = (y >= 0 && y <=2018)? y : 2018;
}

//setter
void Date::setDate(int d, int m, int y){
	day = (d >= 0 && d <= 31) ? d : 1;
	month = (m >= 0 && m <= 12) ? m : 1;
	year = (y >= 0 && y <=2018)? y : 2018;
}
//print the date info
void Date::printDate() const{
	cout << day << "/" << month << "/" << year << endl;
}




