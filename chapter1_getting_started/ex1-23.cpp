//Exercise  1.23:  Write  a  program  that  reads  several  transactions  and  counts
//how many transactions occur for each ISBN.
//Exercise  1.24:  Test  the  previous  program  by  giving  multiple  transactions
//representing  multiple  ISBNs.  The  records  for  each  ISBN  should  be  grouped together.
/*
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
0-201-78368-X 2 15.00
0-201-78368-X 1 10.00
0-201-78347-X 2 25.00
0-201-78347-X 2 30.00
*/

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item1, sum;
	std::cin >> item1;
	sum = item1;
	while (std::cin >> item1)
	{	
		if (sum.isbn() == item1.isbn())
			sum += item1;
		else
		{	
			std::cout << sum << std::endl;
			sum = item1;
		}
	}
	std::cout << sum << std::endl;
	return(0);
}