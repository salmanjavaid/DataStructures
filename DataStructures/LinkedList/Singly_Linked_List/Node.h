template<class T>
class Node
{
 private:
  T val;
 public:
  Node *next;
  Node();
  void SetVal(T);
  T GetVal(T);
  ~Node();
};



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

template<class T>
Node<T>::~Node()
{
  
}
