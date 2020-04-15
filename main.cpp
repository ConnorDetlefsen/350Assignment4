#include "DoublyLinkedList.h"
#include "GenQueue.h"

using namespace std;


int main(int argc, char** argv) { /*
  DoublyLinkedList<int> a;
  int n = 10;
  for (int i = 0; i < 10; ++i) {
    a.insertFront(n+1);
    n *= 2;
    a.insertBack(n);
  }
  cout<< a.remove(1280)<<endl;
  for (int i = 0; i < 9; ++i) {
    cout << a.removeBack() << endl;
    cout << a.removeFront() << endl;
  } */
  GenQueue<char> *q = new GenQueue<char>(10);

  q->insert('r');
  q->insert('e');
  q->insert('n');
  q->insert('e');

  cout << "peek :" << q->peek() << endl;
  cout << "remove :" << q->remove() << endl;
  cout<< "inserting P,D,P into queue" << endl;

  q->insert('P');
  q->insert('D');
  q->insert('P');

  cout << "purgin queue" << endl;
  while(!q->isEmpty()){
    cout << "remove " << q->remove() << endl;
  }
  return 0;
}
