//Exercise  1.21:  Write  a  program  that  reads  two  Sales_item  objects  that
//have the same ISBN and produces their sum.
//0-201-78345-X 3 20.00
//0-201-78345-X 2 25.00

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
		std::cout << item1 + item2 << std::endl;
	else {
		std::cerr << "Data must refer to same ISBN"<< std::endl;
		return -1;
	}
	return(0);
}