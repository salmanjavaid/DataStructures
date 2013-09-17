template<class T>
class Node
{
 private:
  T val;
 public:
  Node<T> *left;
  Node<T> *right;
  Node();
  void SetVal(T);
  T GetVal();
  ~Node();
}


template<class T>
Node<T>::Node()
{
  left = 0;
  right = 0;
}


template<class T>
void Node<T>::SetVal(T Val)
{
  val = Val;
}


template<class T>
T Node<T>::GetVal()
{
  return val;
}

template<class T>
Node<T>::~Node()
{

}


