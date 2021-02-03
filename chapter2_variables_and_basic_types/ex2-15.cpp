/*
Exercises Section 2.3.1
Exercise 2.15: Which of the following definitions, if any, are invalid? 
Why?
(a)int ival = 1.01;
// valid, but 1.01 is truncated to 1
(b)int &rval1 = 1.01;
//invalid, initializer must be an object
(c)int &rval2 = ival;
// valid
(d)int &rval3;
// invalid, a reference must be initialized

Exercise  2.16:  Which,  if  any,  of  the  following  assignments  are  invalid?  
If they are valid, explain what they do.
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a)r2 = 3.14159;
// valid. 3.14159 is assigned to d.
(b)r2 = r1;
// invalid. Only doubles can be assigned to r2 and r1 is int. (i is int)
(c)i = r2;
//valid. 3.14159 is in r2 -> d. Value is truncated to 3
(d)r1 = d; 
// invalid. only ints can be assigned to r1

Exercise 2.17: What does the following code print
int i, &ri = i;
i = 5; 
ri = 10;
std::cout << i << " " << ri << std::endl;
//10 10\n
*/

#include <iostream>

int main()
{
	int i, &ri = i;
	i = 5; 
	ri = 10;
	std::cout << i << " " << ri << std::endl;
}