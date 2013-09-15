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
