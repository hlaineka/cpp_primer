//Exercise  7.2:  Add  the  combine  and  isbn  members  to  the  Sales_data
//class you wrote for the exercises in § 2.6.2 (p. 76).

//Exercise  7.6:  Define  your  own  versions  of  the  add, read,  and  print
//functions.

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

struct Sales_data {
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	Sales_data add(const Sales_data &first, const Sales_data &second);
	std::istream &read(std::istream &stream_in, Sales_data item);
	std::ostream &print(std::ostream &stream_out, Sales_data item);
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold; // add the members of rhs into the members of ''this'' object
	revenue += rhs.revenue;
	return *this; // return the object on which the function was called
}

Sales_data add(const Sales_data &first, const Sales_data &second)
{
	Sales_data returnable = first;
	returnable.combine(second);
	return (returnable);
}

std::istream &read(std::istream &stream_in, Sales_data item)
{
	double price = 0.0;
	stream_in >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return stream_in;
}

std::ostream &print(std::ostream &stream_out, Sales_data item)
{
	stream_out << item.bookNo << item.units_sold << item.revenue << item.avg_price();
	return stream_out;
}

#endif