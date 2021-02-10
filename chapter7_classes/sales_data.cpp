//Exercise  7.6:  Define  your  own  versions  of  the  add, read,  and  print
//functions.
//Exercise 7.8: Why does read  define  its  Sales_data  parameter  as  a  plain
//reference and print define its parameter as a reference to const?

#include "sales_data.h"

//moved to the inside of sales_data struct
//constructors
//Sales_data::Sales_data(std::istream &stream_in) {
//	read (stream_in, *this);
//}

//member functions
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

//non-member functions
Sales_data add(const Sales_data &first, const Sales_data &second)
{
	Sales_data returnable = first;
	returnable.combine(second);
	return (returnable);
}

std::istream &read(std::istream &stream_in, Sales_data &item)
{
	double price = 0.0;
	stream_in >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return stream_in;
}

std::ostream &print(std::ostream &stream_out, const Sales_data &item)
{
	stream_out << item.bookNo << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << std::endl;
	return stream_out;
}