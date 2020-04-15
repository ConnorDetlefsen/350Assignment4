#include <iostream>

template <class X>
class GenQueue
{
  public:
      GenQueue(); //default constructor
      GenQueue(int maxSize); //overload constructor
      ~GenQueue();

      //core funtions
      void insert(X d); //enqueue
      X remove(); //deqeue

      //aux func
      X peek();
      bool isFull();
      bool isEmpty();
      int getSize();

      //vars
      X front; //aka head
      X rear; //aka tail
      int mSize;
      int numElements;

      X *myQueue; //array
};


template <class X>
GenQueue<X>::GenQueue(){
  //defualt constructor

}

//overload constructor
template <class X>
GenQueue<X>::GenQueue(int maxSize){
  myQueue = new X[maxSize];
  mSize = maxSize;
  front = 0;
  rear = -1;
  numElements = 0;
}

template <class X>
GenQueue<X>::~GenQueue(){
  delete myQueue;
}

template <class X>
void GenQueue<X>::insert(X d){
  //add error checking
  myQueue[++rear] = d;
  ++numElements;
}

template <class X>
X GenQueue<X>::remove(){
  //error checking
  X c = '\0';
  c = myQueue[front];
  ++front;
  --numElements;
  return c;
}

template <class X>
X GenQueue<X>::peek(){
  return myQueue[front];
}

template <class X>
bool GenQueue<X>::isFull(){
  return (numElements == mSize);
}
template <class X>
bool GenQueue<X>::isEmpty(){
  return (numElements == 0);
}
template <class X>
int GenQueue<X>::getSize(){
  return numElements;
}
