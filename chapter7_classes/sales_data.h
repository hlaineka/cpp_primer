//Exercise  7.2:  Add  the  combine  and  isbn  members  to  the  Sales_data
//class you wrote for the exercises in § 2.6.2 (p. 76).

//Exercise  7.12:  Move  the  definition  of  the  Sales_data  constructor  that
//takes an istream into the body of the Sales_data class

//Exercise  7.14:  Write  a  version  of  the  default  constructor  that  explicitly
//initializes the members to the values we have provided as in-class initializers.

//g++ -std=c++11 should be used to compile with data member initialization

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

//to add constructor with a non-member function in it, the non member function declarations
//needed to be before the definition of Sales_data. Since the functions still need Sales_data
//it needs to be declared before them and defined after them.

struct Sales_data;

Sales_data add(const Sales_data &first, const Sales_data &second);
std::istream &read(std::istream &stream_in, Sales_data &item);
std::ostream &print(std::ostream &stream_out, const Sales_data &item);

struct Sales_data {
	std::string bookNo;
	unsigned units_sold; //notion, seems these are left uninitialized by default if initialization is not done here
	double revenue;
	
	Sales_data(): bookNo(NULL), units_sold(0), revenue(0){} //ex7.14 consturctor
	Sales_data(const std::string &s): bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(std::istream &stream_in){read(stream_in, *this);}
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
};

#endif