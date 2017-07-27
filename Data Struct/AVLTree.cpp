//#include <iostream>
//#include "avltree.h"
//using namespace std;
//
//static int arr[] = { 3,2,1,4,5,6,7,16,15,14,13,12,11,10,8,9 };
//#define tbl_size(a) ( (sizeof(a)) / (sizeof(a[0])) )
//
//int main()
//{
//	int i, ilen;
//	avltree<int>* tree = new avltree<int>();
//
//	cout << "==add  item in order: ";
//	ilen = tbl_size(arr);
//	for (i = 0; i<ilen; i++)
//	{
//		cout << arr[i] << " ";
//		tree->insert(arr[i]);
//	}
//
//	cout << "\n== preorder: ";
//	tree->preorder();
//
//	cout << "\n== inorder: ";
//	tree->inorder();
//
//	cout << "\n== postorder: ";
//	tree->postorder();
//	cout << endl;
//
//	cout << "== height: " << tree->height() << endl;
//	cout << "== minnumber: " << tree->minimum() << endl;
//	cout << "== maxnumber: " << tree->maximum() << endl;
//	cout << "== tree information : " << endl;
//	tree->print();
//
//	i = 8;
//	cout << "\n== delete  root  node : " << i;
//	tree->remove(i);
//
//	cout << "\n== height: " << tree->height();
//	cout << "\n== inorder: ";
//	tree->inorder();
//	cout << "\n== tree information : " << endl;
//	tree->print();
//
//	// 销毁二叉树
//	tree->destroy();
//
//	return 0;
//}