//Exercise  7.11:  Add  constructors  to  your  Sales_data  class  and  write  a
//program to use each of the constructors.
//Exercise  7.12:  Move  the  definition  of  the  Sales_data  constructor  that
//takes an istream into the body of the Sales_data class

#include "sales_data.h"

int		main() {
	Sales_data first;
	print(std::cout, first);
	Sales_data second("0-201-78345-X");
	print(std::cout, second);
	Sales_data third("0-201-78345-X", 5, 20.00);
	print(std::cout, third);
	Sales_data fourth(std::cin);
	print(std::cout, fourth);
	return (1);
}