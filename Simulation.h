#include <iostream>
#include <fstream> //file streams
#include "Window.h"
#include "Student.h"
#include "GenQueue.h"

using namespace std;

class Simulation{
  public:

    Simulation(); //creates simulation object where program will take place

    void fileRead(string fileName);

    void fileOut();

    int windowCount = 0;

    GenQueue<int> fileInput;
    GenQueue<Student*> studentQueue;    //Student Queue

  //  fileInput = new GenQueue<int>();



};
