#include "Node.h"

template<class T>
class BST
{
 private:
  Node<T> *root;
  T val;
 public:
  Node();
  void Insert(T);
  void Delete();
  ~Node();
}


template<class T>
Node<T>::Node()
{

}

template<class T>
void Node<T>::Insert(T Val)
{
  Node<T>* temp = root, *prev;
  while(temp != 0)
    {
      prev = temp;
      if (temp.val > Val)
	{
	  temp = temp->right;
      	}
      else
	{
	  temp = temp->left;
	}
    }
  Node* nw = new Node<T>();
  nw->val = Val;
  if (prev->val > Val)
    {
      prev->right = nw;
    }
  else
    {
      prev->left = nw;
    }
}
