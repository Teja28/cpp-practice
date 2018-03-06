#include <iostream>
#include <list>
#include <fstream>
using namespace std;


struct todoEntry {
    char[100] name;
};

list<todoEntry> database;
int main(int argc, char** argv) {
    
    while(true) {    
        cout << "Please enter a command: " << flush	
	string cmd;
	getline(cin, cmd);
        switch(cmd){
	   case "Add":
		break;
	   case "Delete":
		break;
	   case "Print"
		break;
	   case "Help":
		break;
	   default:
		break;
    }

}
