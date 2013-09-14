#include "Node.h"
#include <stdio.h>
class LinkedList
{
 private:
  Node *head, *tail;
 public:
  LinkedList();
  bool Insert(int);
  void Delete_Node(int);
  void Delete_List();
  void Print();
  ~LinkedList();
};
