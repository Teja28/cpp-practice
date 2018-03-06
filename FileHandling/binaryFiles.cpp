#include <iostream>
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
    cout << sizeof(Person1) << endl;
    cout << sizeof(Person2) << endl;
}
    
