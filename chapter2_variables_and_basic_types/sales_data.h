//g++ -std=c++11 should be used to compile with data member initialization

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct 	Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif