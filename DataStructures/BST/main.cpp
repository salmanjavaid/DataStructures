#include "BST.h"

int main() {
	BST<int> B(10);
	B.Insert(20);
	B.Insert(5);
	B.Insert(4);
	B.Insert(6);
	B.Insert(18);
	B.Insert(25);
	B.Insert(7);
	B.Insert(16);
	B.Delete(10);
	B.__Wrapper_For_Print();
	return 0;
}
