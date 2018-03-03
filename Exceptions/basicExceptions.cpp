#include <iostream>
using namespace std;

void throwException() {
	bool error = true;
	if(error) {
	   throw 8;
	}
}

int main() {
    try {
        throwException();
    }

    catch (int e) {
	cout << "Error code: " << e << endl;
    }

    
    return 0;
}

