//Exercise  7.13:  Rewrite  the  program  from  page  255  to  use  the  istream
//constructor.

//ex7.14 in sales_data.h
//ex 7.15 in person.h

// test values:
/*
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
0-201-78368-X 2 15.00
0-201-78368-X 1 10.00
0-201-78347-X 2 25.00
0-201-78347-X 2 30.00
0-201-78347-X 0 30.00
0-201-78347-X 0 0.0
*/

#include "sales_data.h"

int main() {
	double price = 0;
	Sales_data total(std::cin);
	if (!std::cin.fail())
	{
		while (true)
		{
			Sales_data trans(std::cin);
			if (std::cin.fail())
				break;
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total);
				total.bookNo = trans.isbn();
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		print(std::cout, total);
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}