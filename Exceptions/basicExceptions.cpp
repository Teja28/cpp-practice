#include <iostream>
using namespace std;

void throwException() {
	bool error = true;
	if(error) {
	   throw 8;
	}
}

int main() {
	throwException();
	return 0;
}

