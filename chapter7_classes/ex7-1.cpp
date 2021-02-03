//Exercise 7.1:  Write  a  version  of  the  transaction-processing  program  from  §1.6  (p.  24) 
//using  the  Sales_data  class  you  defined  for  the  exercises  in  §2.6.1 (p. 72).

// test values:
/*
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
0-201-78368-X 2 15.00
0-201-78368-X 1 10.00
0-201-78347-X 2 25.00
0-201-78347-X 2 30.00
*/

#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {
	double price = 0;
	Sales_data total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (std::cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = total.units_sold * price;
		Sales_data trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (std::cin >> trans.bookNo >> trans.units_sold >> price)
		{
			// if we're still processing the same book
			trans.revenue = trans.units_sold * price;
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold = total.units_sold + trans.units_sold;
				total.revenue = total.revenue + trans.revenue;
			}
			else
			{
				// print results for the previous book
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << std::endl;
				total.bookNo = trans.bookNo; // total now refers to the next book
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << std::endl; // print the last transaction
	} 
	else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1;// indicate failure
	}
	return 0;
}