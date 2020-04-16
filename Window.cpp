#include <iostream>
#include "Window.h"

using namespace std;

Window::Window(){   //initialize these based on file input
  isOpen = true;
  currStudent = NULL;

}

Window::Window(bool isOpen1, Student* currStudent1){
  isOpen = isOpen1;
  currStudent = currStudent1;
}

Window::~Window(){
  //delete Student;
}

void Window::StudentToWindow(Student* currStudent1){
  isOpen = false;
  currStudent1 = currStudent1;
}

void Window::StudentDone(){
  isOpen = true;
  currStudent = NULL;
}
