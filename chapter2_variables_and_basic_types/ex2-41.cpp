//Exercises Section 2.6.2
//Exercise  2.41:  Use  your  Sales_data  class  to  rewrite  the  exercises  in  §1.5.1 (p. 22),
//§ 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your Sales_data class in the same
//file as your main function

#include <string>

struct 	Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//Exercise  1.21:  Write  a  program  that  reads  two  Sales_item  objects  that
//have the same ISBN and produces their sum.

//0-201-78345-X 3 20.00
//0-201-78345-X 2 25.00

#include <iostream>

int main()
{
	Sales_data item1, item2;
	std::cin >> item1.bookNo >> item1.units_sold >> item1.revenue;
	std::cin >> item2.bookNo >> item2.units_sold >> item2.revenue;
	if (item1.bookNo == item2.bookNo)
	{	
		int full_revenue = item1.units_sold * item1.revenue + item2.units_sold * item2.revenue;
		std::cout << item1.bookNo << " " <<  item1.units_sold + item2.units_sold << " " << full_revenue
				<< " " << full_revenue / (item1.units_sold + item2.units_sold) << std::endl;
	}
	else
	{
		std::cout << item1.bookNo << " & " << item2.bookNo << ": ";
		std::cerr << "Data must refer to same ISBN"<< std::endl;
		return -1;
	}
	return(0);
}