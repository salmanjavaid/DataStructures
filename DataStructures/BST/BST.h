#include "Node.h"

template<class T>
class BST
{
 private:
  Node<T> *root;
  T val;
 public:
  BST<T>();
  void Insert(T);
  void Delete();
  ~BST<T>();
};


template<class T>
BST<T>::BST()
{

}

template<class T>
void BST<T>::Insert(T Val)
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
  Node<T>* nw = new Node<T>();
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
