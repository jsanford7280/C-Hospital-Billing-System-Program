//personType.h

#ifndef personType_H

#define personType_H

#include <string>

using namespace std;

//Design a calss personType declare in chapter 10 given book

class personType

{

public:

    void print() const;

    void setName(string first, string last);

    string getFirstName() const;



    string getLastName() const;



    personType(string first = "", string last = "");



protected:

    string firstName;

    string lastName;

};

#endif