/**
* Huffman树测试程序
*
*/

#include <iostream>
#include "Huffman.h"
using namespace std;


int main()
{
	int a[] = { 5,6,8,7,15 };
	int i, ilen = sizeof(a) / (sizeof(a[0]));
	Huffman<int>* tree = new Huffman<int>();

	cout << "== Add  array: ";
	for (i = 0; i<ilen; i++)
		cout << a[i] << " ";

	tree->create(a, ilen);

	cout << "\n== preOrder: ";
	tree->preOrder();

	cout << "\n== InOrder: ";
	tree->inOrder();

	cout << "\n== postOrder: ";
	tree->postOrder();
	cout << endl;

	cout << "== tree information: " << endl;
	tree->print();

	// 销毁二叉树
	tree->destroy();

	return 0;
}