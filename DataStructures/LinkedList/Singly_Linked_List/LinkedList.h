#include "Node.h"
#include <stdio.h>

template<class T>
class LinkedList
{
 private:
  Node<T> *head, *tail;
 public:
  LinkedList();
  void Insert(T);
  void Delete_Node();
  void Delete_List();
  void Print();
  ~LinkedList();
};
