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
  void Print(int);
  ~LinkedList();
};


template<class T>
LinkedList<T>::LinkedList()
{
  head = 0;
  tail = 0;
}

template<class T>
void LinkedList<T>::Insert(T num)
{
  if (head == 0)
    {
      Node<T> *head_node = new Node<T>();
      head_node->SetVal(num);
      head = head_node;
      tail = head_node;
      tail->next = head_node;
      head->next = tail;
    }
  else
    {
      Node<T> *head_node = new Node<T>();
      head_node->SetVal(num);
      tail->next = head_node;
      tail = head_node;
    }

}

template<class T>
void LinkedList<T>::Print(int choice)
{
  Node<T> *temp = head;
  while(temp != 0)
    {
      if (choice == 1){
	  printf("%s\n", temp->GetVal(0));
      }
      else{
	  printf("%i\n", temp->GetVal(0));
      }
      temp = temp->next;
    }
}

template<class T>
LinkedList<T>::~LinkedList()
{
  Node<T> *temp = head, *temp_1;
  while(temp != 0)
    {

      temp_1 = temp;
      temp = temp->next;
      delete temp_1;
    }  
}




