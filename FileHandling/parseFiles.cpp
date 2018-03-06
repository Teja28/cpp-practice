#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string filename = "stats_example.txt";
  ifstream input;
  input.open(filename);  

  if(!input.is_open()){
    return 1;
  }
  int* populations;
  string line;
  getline(input, line, ':');
  int numStates;
  input >> numStates;
  populations = (int*)malloc(sizeof(int) * numStates); //idk if theres a better way to do this in c++
  
  for(int i = 0; i < numStates; i++){
    getline(input, line, ':');
    int pop;
    input >> pop;
    populations[i] = pop;
    cout << populations[i] << endl;
  }
    
  return 0;
}
