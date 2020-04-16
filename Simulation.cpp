#include <iostream>
#include "Simulation.h"

using namespace std;


Simulation::Simulation(){   //initialize these based on file input

}

void Simulation::fileRead(string fileName){
  ifstream fin; //creation of ifstream class object
  string line = "";
  fin.open(fileName);
    while (fin) {     //reads in input from text file given from user
      getline(fin, line);
      for(int i = 0; i < line.length(); ++i){
        char a = line[i];  //changes the file input from char to integers
        int ia = a - '0';
        fileInput.insert(ia);
      }
    }
}
void Simulation::fileOut(){
  cout << "purgin queue" << endl;
  while(!fileInput.isEmpty()){
    cout << "remove " << fileInput.remove() << endl;
  }
}
