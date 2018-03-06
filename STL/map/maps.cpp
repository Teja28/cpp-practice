#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> people;

    people["Mike"] = 40;
    people["Raj"] = 20;
    people["Vicky"] = 30;
    people.insert(pair<string,int>("Teja",22)); 
    people.insert(make_pair("John",40));
    cout << people["Raj"] << endl;
    for(map<string,int>::iterator it = people.begin(); it != people.end();it++)
    {
	cout << it->first << ":" << it->second << endl;
    }

    if(people.find("Raj") != people.end()) {
	cout << "Found Raj" << endl;
    }

    else {
	cout << "Key not found" << endl;
    }

    for(map<string,int>::iterator it = people.begin();it != people.end(); it++)
    {
	pair<string,int> person = *it;
        cout << person.first << ":" << person.second << endl;
    }
}
    
