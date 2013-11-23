#include "Node.h"
#include <iostream>
using namespace std;

template<class T>
class BST {
 private:
  Node<T> *root;
 public:
  BST<T>(T);
  void Insert(T);
  void __Wrapper_For_Print();
  void InOrder(Node<T>*);
  Node<T>* Predecessor(T);
  void Delete(T);
  ~BST<T>();
};


template<class T>
BST<T>::BST(T value) {
	root = new Node<T>();
	root->SetVal(value);
}

template<class T>
BST<T>::~BST() {

}

template<class T>
void BST<T>::Insert(T Val) {

  Node<T>* temp = root, *prev;
  if (root != 0) {
      while(temp != 0) {
		  prev = temp;
		  if (temp->GetVal() > Val) {
		      temp = temp->left;
		    }
		  else {
		      temp = temp->right;
		    }
	  }

      Node<T>* nw = new Node<T>();
	  nw->SetVal(Val);
	  if (prev->GetVal() > Val) {
		  prev->left = nw;
		}
      else {
		  prev->right = nw;
		}
    } else {
	      Node<T>* nw = new Node<T>();
		  nw->SetVal(Val);
		  root = nw;
	    }
}

template<class T>
void BST<T>::__Wrapper_For_Print() {
	InOrder(this->root);
}


template<class T>
void BST<T>::Delete(T val) {
	if (root) {
		if (root->GetVal() != val) {
				Node<T> *prev = Predecessor(val), *fwd, *temp;
				if (prev->GetVal() > val) {
						if (prev->left->left) {
							fwd = prev->left->left;
							temp = prev->left;
							prev->left = fwd;
							delete temp;
						} else {
							temp = prev->left;
							delete temp;
						}
				} else {
					if (prev->right->right) {
						fwd = prev->right->right;
						temp = prev->right;
						prev->right = fwd;
						delete temp;
					} else {
						temp = prev->right;
						delete temp;
					}
				}
		} else {
			Node<T> *temp = root, *fwd = root->right, 
				*update_left = root->right->left, *update_right = root->right->right;
			fwd->left = root->left;
			fwd->right = update_left;
			fwd->right->right = update_right;
			delete root;
			root = fwd;
		}
	}
}

template<class T> 
Node<T>* BST<T>::Predecessor(T val) {
	if (root) {
		Node<T> *temp = root, *prev;
		while (temp) {
			prev = temp;
			if (temp->GetVal() > val) {
				if (temp->left->GetVal() == val) {
					return temp;
				} else {
					temp = temp->left;
				}
			}
			else if (temp->GetVal() < val) {
				if (temp->right->GetVal() == val) {
					return temp;
				} else {
					temp = temp->right;
				}
			}
		}
	} else { return 0; }

}


template<class T>
void BST<T>::InOrder(Node<T>* temp) {
	if (temp) {
		cout<<temp->GetVal()<<endl;
		InOrder(temp->left);
		InOrder(temp->right);
	}
}


