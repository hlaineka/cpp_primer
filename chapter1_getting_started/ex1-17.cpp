//Exercises Section 1.4.4
//Exercise 1.17: What happens in the program presented in this section if the input values are all equal?
//What if there are no duplicated values?
//Exercise 1.18: Compile and run the program from this section giving it only equal  values  as  input.
//Run  it  again  giving  it  values  in  which  no  number  is repeated.
//Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.13) that printed a range of
//numbers so that it handles input in which the firstnumber is smaller than the second - Already does that!

#include <iostream>

int main()
{
	// currValis the number we're counting; we'll read new values intoval
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal)
	{
		int cnt = 1;
		// store the count for the current value we're processing
		while (std::cin >> val)
		{
			// read the remaining numbers
			if (val == currVal)// if the values are the same
				++cnt;// add1tocnt
			else
			{ // otherwise, print the count for the previous value
				std::cout << currVal << " occurs "
					<< cnt << " times" << std::endl;
				currVal = val;// remember the new value
				cnt = 1;// reset the counter
			}
		}// whileloop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal <<" occurs "
			<< cnt << " times" << std::endl;
	} // outermostifstatement ends here
	return 0;
}