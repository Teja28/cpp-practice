#include <iostream>
#include <exception> //explicit import for the shitz
using namespace std;

class TestException: public exception {
public:
    // when overriding what do not specify throw params
    virtual const char* what() const throw() {
	return "Something bad happened!";
    }
};

class Test {
public:
    void badThing() {
	throw TestException();
    }
};

int main() {
    Test test;
    try{
	test.badThing();
    }
    catch(TestException &e)
    {
	cout << e.what() << endl;
    }
}

	  
