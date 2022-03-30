// Title: Simple C++ class
// Purpose: Create simple class with out of class implementation/ outline
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class myName
{
private:                                      // can only be accesed by the class function, can be accessed outside class without telling^ the compiler so
    string _firstNane;
    string _lastName;
public:                                       // can be called outside class
    void SetFirstName(const string& fName);
    void SetLastName(const string& lName);
    string GetFirstName() const;
    string GetLastName() const;
};
// Declaration outside class look the name of class and colon before the name of function !
void myName::SetFirstName(const string &fName)
{
    _firstNane = fName;
}

void myName::SetLastName(const string &lName)
{
    _lastName = lName;
}

string myName::GetFirstName() const {
    return _firstNane;
}

string myName::GetLastName() const
{
    return _lastName;
}

int main() {
    myName person;                          // create object of the class, the function of the class can be used & private data can be accessed
    myName person1;
//1
    person.SetFirstName("Jonah");
    person.SetLastName("Jenna");

    cout << '-' << person.GetFirstName() << ' ';
    cout << person.GetLastName() << endl;

//2
    person1.SetFirstName("Davis");
    person1.SetLastName("Rock");

    cout << '-' << person1.GetFirstName() << ' ';
    cout << person1.GetLastName() << endl;

    return 0;
}
