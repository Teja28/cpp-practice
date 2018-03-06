#include <iostream>
#include <map>
using namespace std;

class Person{
private:
    string name;
    int age;

public:

    Person(): name(), age(0) {
    }

    Person(const Person &diff) {
	//cout << "Copy" << endl;
        this->name = diff.name;
        this->age = diff.age;
    }

    Person(string name, int age):
	name(name), age(age){
    }

    void print() const{
	cout << name << ":" << age << flush;
    }

    // const parameter and function to not change either object in comparison
    bool operator<(const Person &other) const {
        // if names are same compare ages
	if(name == other.name) {
	     return age < other.age;
	}    
	return name < other.name;
    }
};


int main(){
    map<int, Person> people;
    
    // uses default constructor
    people[0] = Person("Mike",40);
    people[1] = Person("Vicky",30);
    people[2] = Person("Raj",20);
    
    // uses copy constructor
    people.insert(make_pair(43,Person("Teja",22)));
    people.insert(make_pair(45,Person("Rob",23)));
    
    for(map<int,Person>::iterator it = people.begin(); it != people.end();it++)
    {
	it->second.print();
	cout << endl;
    }

    //people as keys
    map<Person,int> people2;

    people2[Person("Mike",40)] = 40;
    people2[Person("Sam",23)] = 52;
    people2[Person("Teja",22)] = 21;
    people2[Person("Mike",444)] = 49;

    for(map<Person,int>::iterator it = people2.begin(); it != people2.end();it++)
    {
	cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    
}    
