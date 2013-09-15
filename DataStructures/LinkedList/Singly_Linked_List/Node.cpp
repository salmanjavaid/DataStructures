#include "Node.h"

template<class T>
Node<T>::Node()
{
  val = 0;
}

template<class T>
bool Node<T>::SetVal(T Val)
{
  val = Val;
  return true;
}

template<class T>
T Node::GetVal(T Index)
{
  return val;
}
