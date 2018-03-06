#include <iostream>
#include <fstream>
using namespace std;


#pragma pack(push,1) //compiler directive to pack data with byte alignment of 1
struct Person1 {
    char name[50]; //use statically allocated char arrays rather than strings
    int age;
    double  weight;
};
#pragma pack(pop) //pop off internal compiler stack


// minimize memory usage in struct
struct Person2 {
    char name[50];
    int age;
    double weight;
}__attribute__((__packed__,aligned(1)));

int main() {
    string fileName1 = "binaryFile1.bin";
    string fileName2 = "binaryFile2.bin";
    ofstream outputFile;
    ofstream output;
    Person1 someguy = {"Teja", 22, 200.5};
    Person2 sameguy = {"Teja", 22, 200.5};
    outputFile.open(fileName1, ios::binary); //interpret file as binary rather than text
    
    if(outputFile.is_open()) {
        outputFile.write(reinterpret_cast<char *>(&someguy), sizeof(Person1));
        outputFile.close();
    }
    else {
	cout << "Could not read file " + fileName1 << endl;
    }

    output.open(fileName2, ios::binary);
    if(output.is_open()){
	output.write(reinterpret_cast<char *>(&sameguy), sizeof(Person2));
    }
    else {
	cout << "Couldn't read file:" +fileName2 << endl;
    }
}
    
