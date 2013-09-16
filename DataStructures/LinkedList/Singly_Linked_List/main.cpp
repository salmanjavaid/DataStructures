#include "LinkedList.h"

#define character 1
#define integer 2

void char_input()
{
  LinkedList<char> L_1;

  L_1.Insert('a');
  L_1.Insert('b');
  L_1.Insert('c');
  L_1.Insert('d');
  L_1.Print(character);
}

void int_input()
{
  LinkedList<int> L_1;

  L_1.Insert(5);
  L_1.Insert(10);
  L_1.Insert(15);
  L_1.Insert(20);
  L_1.Print(integer);
}


int main()
{
  // int_input();
  // printf("\n\n\n");
  char_input();
  return 0;
}
