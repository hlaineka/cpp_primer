//Exercise  7.4:  Write  a  class  named  Person  that  represents  the  name  and
//address  of  a  person.  Use  a  string  to  hold  each  of  these  elements.
//Subsequent exercises will incrementally add features to this class.

//Exercise  7.5:  Provide  operations  in  your  Person  class  to  return  the  name
//and address. Should these functions be const? Explain your choice.
//they should be const, because they only should return the value, not write in it.

#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

struct person
{
	string name;
	string address;
	string get_name() const { return name; }
	string get_address() const { return address; }
};

#endif