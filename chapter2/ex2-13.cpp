//Exercise 2.13: What is the value of j in the following program?
//Exercise  2.14:  Is  the  following  program  legal?  If  so,  
//what  values  are printed?

#include <iostream>

int i = 42;
int main(){
	int i = 100;
	int j = i;
	std::cout << j << std::endl;
}