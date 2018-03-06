#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> numbers(20,0); //vector of zeros
    
    cout << "Vector Size: " << numbers.size() << endl;
   
    int cap = numbers.capacity();
    cout << "Capacity: " << cap << endl;

    vector<double> size;
    for(int i = 0; i < 100; i++)
    {	
	if(size.capacity() != cap) {
	    cap = size.capacity();
	    cout << "Size Capacity: " << cap << endl;
	    cout << "Iteration: " << i+1 << endl;
	}
	size.push_back(i);
    }

    size.clear();
    cout << "Capacity: " << size.capacity() << endl;
    cout << "Size: " << size.size() << endl;	    
}

