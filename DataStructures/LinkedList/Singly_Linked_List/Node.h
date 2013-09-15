template<class T>
class Node
{
 private:
  T val;

 public:
  Node<T> *next;
  Node<T>();
  void SetVal(T);
  T GetVal(T);
  ~Node();
};
