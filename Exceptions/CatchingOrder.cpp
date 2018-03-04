#include <iostream>
using namespace std;

void badStuff(){
    bool error1 = true;
    bool error2 = true;

    if (error1) {
	throw bad_alloc();
    }

    if (error2) {
	throw exception();
    }
}


int main()
{
    try {
	badStuff();
    }
    catch(exception &e) {
	cout << "Exception Occurred: " << e.what() << endl;
    }
    catch(bad_alloc &e) {
	cout << "Bad Alloc Occured: " <<  e.what() << endl;
    }


    return 0;
}


