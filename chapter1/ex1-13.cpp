#include <iostream>
int main()
{
	//ex1-9
	int sum = 0;

	for (int i = 50; i <= 100; i++)
		sum += i;
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;
	

	//ex1-10
	for (int j = 10; j >= 0; j--)
		std::cout << j << " " ;
	std::cout << std::endl;


	//ex1-11 erm no.
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	while (v1 != v2)
	{
		std::cout << v1 << " " ;
		if (v1 < v2)
			v1++;
		else
			v1--;
	}
	std::cout << v2 << std::endl ;

	return(0);
}