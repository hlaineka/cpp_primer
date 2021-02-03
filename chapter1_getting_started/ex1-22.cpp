//Exercise 1.22: Write a program that reads several transactions for the same
//ISBN. Write the sum of all the transactions that were read.

//0-201-78345-X 3 20.00
//0-201-78345-X 2 25.00
//0-201-78345-X 1 25.00

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item1, sum;
	std::cin >> item1;
	sum = item1;
	while (std::cin >> item1)
	{	
		if (sum.isbn() != item1.isbn())
		{
			std::cerr << "Data must refer to same ISBN"<< std::endl;
			return -1;
		}
		sum += item1;
	}
	std::cout << sum << std::endl;
	return(0);
}