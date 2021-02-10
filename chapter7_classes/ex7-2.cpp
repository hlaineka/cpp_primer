//Exercise  7.3:Revise your transaction-processing program from §7.1.1(p.
//256) to use these members.

//ex 7.4. and 7.5. in person.h 
//ex 7.6 in sales_data.h

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

#include <iostream>
#include <string>
#include "sales_data.h"

int main() {
	double price = 0;
	Sales_data total;
	if (std::cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = total.units_sold * price;
		Sales_data trans;
		while (std::cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = trans.units_sold * price;
			if (total.isbn() == trans.isbn()) //isbn() added here
				total.combine(trans); //combine added here
			else
			{
				//two isbn()s added
				std::cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << std::endl;
				total.bookNo = trans.isbn();
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		std::cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << std::endl; // print the last transaction
	} 
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}