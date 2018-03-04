#include <iostream>
using namespace std;

void throwException() {
	bool error1 = false;
	bool error2 = true;
	bool error3 = true;
	if(error1) {
	   throw "Exception Occurred.";
	}

	if(error2) {
	   throw string("Something else went wrong");
	}
	
	if(error3)
	{
	    throw string("Something went wrong");
	}
}

int main() {
    

    try {
        throwException();
    }

    catch (int e) {
	cout << "Error code: " << e << endl;
    }
    catch(char const* e) {
	cout << "Error message: " << e << endl;
    }
    catch(string &e) {
	cout << "string error message" << endl;
    }


    cout << "Program still running" << endl;
    return 0;
}

