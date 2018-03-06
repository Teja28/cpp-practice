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
	cout << "Copy" << endl;
        this->name = diff.name;
        this->age = diff.age;
    }

    Person(string name, int age):
	name(name), age(age){
    }

    void print(){
	cout << name << ":" << age << endl;
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
    }
}    
