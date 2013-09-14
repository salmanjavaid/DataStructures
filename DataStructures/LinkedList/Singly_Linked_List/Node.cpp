#include "Node.h"

Node::Node()
{
  val = 0;
}

bool Node::SetVal(int Val)
{
  val = Val;
  return true;
}

int Node::GetVal(int Index)
{
  return val;
}
