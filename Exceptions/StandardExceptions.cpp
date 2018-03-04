#include <iostream>
using namespace std;

class MightError {
public:
    MightError() {
	char *byteArray = new char [999999999999999];
	delete [] byteArray;
    }
};


int main(int argc, char**argv)
{
   try {
       MightError issue;
   }

   catch(bad_alloc &e){
	cout << "Caught Exception: " << e.what() << endl;
   }

   cout << "Still Running" << endl;
      
   return 0;
}
