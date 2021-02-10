//Exercise 7.7:  Rewrite  the  transaction-processing  program  you  wrote  for  the
//exercises in § 7.1.2 (p. 260) to use these new functions. (add, read, write)

//Exercise 7.8: Why does read  define  its  Sales_data  parameter  as  a  plain
//reference and print define its parameter as a reference to const?
//Read needs to change the values of the object, print should not.

//ex. 7.9 in person.cpp

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
	Sales_data total;
	if (read(std::cin, total)) //changed
	{
		//total.revenue = total.units_sold * price;   //deleted, read handles this.
		Sales_data trans;
		while (read(std::cin, trans)) //changed
		{
			//trans.revenue = trans.units_sold * price;  //deleted, read handles this.
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total); //changed
				total.bookNo = trans.isbn();
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		print(std::cout, total); //changed
	} 
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}