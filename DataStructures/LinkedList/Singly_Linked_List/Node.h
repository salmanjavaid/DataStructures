class Node
{
 private:
  int val;

 public:
  Node *next;
  Node();
  bool SetVal(int);
  int GetVal(int);
  ~Node();
};
