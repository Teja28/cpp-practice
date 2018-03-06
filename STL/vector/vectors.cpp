#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");


    cout << "For loop iteration:" << endl;    
    //iterate through vector with for loop
    for(int i = 0; i < strings.size(); i++) {
	cout << strings[i] << endl;
    }
    
    cout << "\n" << "Using Iterators and while loop:" << endl;
    // iterators and while loop (this is probably not correct but fuck it)
    vector<string>::iterator it = strings.begin();
    while(it != strings.end()) {
	cout << *it << endl;
	it++;
    }

    //iterate through with for loop and iterators
    cout <<  "\nUsing Iterators and for loops:" << endl;
    for(vector<string>::iterator i = strings.begin(); i != strings.end();i++){
	cout << *i << endl;
    }
   

}
