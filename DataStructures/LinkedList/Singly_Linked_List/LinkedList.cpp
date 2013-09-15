#include "LinkedList.h"

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
      Node<T> *head_node = new Node();
      head_node->SetVal(num);
      head = head_node;
      tail = head_node;
      tail->next = head_node;
      head->next = tail;
    }
  else
    {
      Node<T> *head_node = new Node();
      head_node->SetVal(num);
      tail->next = head_node;
      tail = head_node;
    }

}

void LinkedList<T>::Print()
{
  Node<T> *temp = head;
  while(temp != 0)
    {
      printf("%i\n", temp->GetVal(0));
      temp = temp->next;
    }
}


LinkedList<T>::~LinkedList()
{


}




