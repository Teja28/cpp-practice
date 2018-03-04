#include <iostream>
#include <fstream> //functions to deal with files

using namespace std;

int main() {
    ofstream outFile;

    string outputFileName = "example.txt";

    outFile.open(outputFileName);

    if(outFile.is_open()) {
	for(int i = 0; i < 10; i++)
	{
	    outFile << i << " This is line " << i+1 << endl;
	}
    }

    else
    {
	cout << "Error Opening File." << endl;
    }
}

