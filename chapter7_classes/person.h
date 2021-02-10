//Exercise  7.4:  Write  a  class  named  Person  that  represents  the  name  and
//address  of  a  person.  Use  a  string  to  hold  each  of  these  elements.
//Subsequent exercises will incrementally add features to this class.

//Exercise  7.5:  Provide  operations  in  your  Person  class  to  return  the  name
//and address. Should these functions be const? Explain your choice.
//they should be const, because they only should return the value, not write in it.

//Exercise 7.15: Add appropriate constructors to your Person class

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

struct Person;

std::istream &read(std::istream &stream_in, Person &person);
std::ostream &print(std::ostream &stream_out, const Person &person);

struct Person
{
	string name;
	string address;

	Person(): name(NULL), address(NULL) {}
	Person(const std::string &s): name(s), address(NULL) {}
	Person(const std::string &s1, const std::string &s2): name(s1), address(s2) {}
	Person(std::istream &stream_in){read(stream_in, *this);}
	string get_name() const { return name; }
	string get_address() const { return address; }
};

#endif