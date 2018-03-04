#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string inputFileName = "example.txt";
    
    ifstream inputFile;

    inputFile.open(inputFileName);

    if(inputFile.is_open()) {
	while(inputFile){
	    string line;
	    getline(inputFile, line);
	    cout << line << endl; 
	}
	inputFile.close();	
    }

    else {
	cout << "Error Opening File: " << inputFileName << endl;
    }
}

