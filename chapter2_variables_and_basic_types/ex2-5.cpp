//Exercise  2.5:  Determine  the  type  of  each  of  the  following  literals. 
//Explainthe differences among the literals in each of the four examples
//(a)'a',L'a', "a", L"a"
// char, wide char wchar_t, string, string of wchar_t
//(b)10, 10u, 10L, 10uL, 012, 0xC
//int, unsigned int, long int, unsigned long int, octal, hexa
//(c)3.14,3.14f, 3.14L
//double, float, long double
//(d)10, 10u, 10., 10e-2
//int, unsigned int, double, double

//Exercise  2.6:  What,  if  any,  are  the  differences  between  the  following
//definitions:
// int month = 9, day = 7;
// int month = 09, day = 07;
// the latter will be saved in octal form.

//Exercise 2.7: What values do these literals represent? What type does each have?
// (a)"Who goes with F\145rgus?\012" Octal, e and a \n
// (b)3.14e1L  long double
// (c)1024f float
// (d)3.14L  long double

// Exercise 2.8: Using escape sequences, write a program to print 2M followed
//a newline. Modify the program to print 2, then a tab, then an M, followed by
//a newline.

#include <iostream>
int main()
{
	std::cout << "\062\115" << std::endl; //you can easily check these in any ascii chart. They usually have octal values also.
	std::cout << "\062\t\115" << std::endl;
}