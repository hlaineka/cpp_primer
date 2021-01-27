//Exercise  2.5:  Determine  the  type  of  each  of  the  following  literals. 
//Explainthe differences among the literals in each of the four examples
//(a)'a',L'a', "a", L"a"
//(b)10,10u, 10L, 10uL, 012, 0xC
//(c)3.14,3.14f, 3.14L
//(d)10,10u, 10., 10e-2

//Exercise  2.6:  What,  if  any,  are  the  differences  between  the  following
//definitions:
// int month = 9, day = 7;
// int month = 09, day = 07;

//Exercise 2.7: What values do these literals represent? What type does each have?
// (a)"Who goes with F\145rgus?\012"
// (b)3.14e1L(c)1024f(d)3.14L

// Exercise 2.8: Using escape sequences, write a program to print 2M followed
//a newline. Modify the program to print 2, then a tab, then an M, followed by
//a newline.

#include <iostream>
int main()
{
	std::cout << "\062\115" << std::endl; //you can easily check these in any ascii chart. They usually have octal values also.
	std::cout << "\062\t\115" << std::endl;
}