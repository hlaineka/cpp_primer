//Exercise 7.9:  Add  operations  to  read  and  print  Person  objects  to  the  code
//you wrote for the exercises in § 7.1.2 (p. 260).
//Exercise 7.10: What does the condition in the following if statement do?
//if (read(read(cin, data1), data2))
//data1 will be read from cin, and data2 after it from cin. If both values can be read,
//the statement returns true.

#include "person.h"

std::istream &read(std::istream &stream_in, Person &person)
{
	stream_in >> person.name >> person.address;
	return stream_in;
}

std::ostream &print(std::ostream &stream_out, const Person &person)
{
	stream_out << person.name << " " << person.address << std::endl;
	return stream_out;
}