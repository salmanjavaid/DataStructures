template<class T>
class BST
{
 private:
  Node *root;
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
void Node<T>::Node(T Val)
{
  Node* temp = root;
}
