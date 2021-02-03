//Exercise 2.40: Write your own version of the Sales_data class.

#include <iostream>

struct 	Sales_data
{
	std::string bookNo = NULL;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data accum, trans, *salesptr;
