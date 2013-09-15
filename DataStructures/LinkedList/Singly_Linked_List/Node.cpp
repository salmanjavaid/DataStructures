#include "Node.h"

template<class T>
Node<T>::Node()
{
  val = 0;
}

template<class T>
void Node<T>::SetVal(T Val)
{
  val = Val;
}

template<class T>
T Node<T>::GetVal(T Index)
{
  return val;
}
