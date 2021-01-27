#include <iostream>
int main()
{
	int sum = 0, nbr = 0;
	std::cout << "Enter any amount of numbers" << std::endl;
	while (std::cin >> nbr)
		sum += nbr;
	std::cout << "Sum of your numbers is " << sum << std::endl;
	return (0);
}