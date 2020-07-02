#include"Tree.h"
int main(){
	cout << "Create and fill first tree:\n";
	Tree tree;
	tree.Add(50, 200);
	tree.Add(17, 100);
	tree.Add(12, 12);
	tree.Add(23, 5474);
	tree.Add(19, 54);
	tree.Add(14, 44);
	tree.Add(9, 10);
	tree.Add(72, 30);
	tree.Add(76, 33);
	tree.Add(54, 45);
	tree.Add(67, 11);
	tree.Add(52, 233);
	tree.Add(100, 0);

	
	cout << "\nPLK:\n";
	tree.PrintPKL(); cout << endl;
	cout << "\nKLP:\n";
	tree.PrintKLP(); cout << endl;
	cout << "\nLKP:\n";
	tree.PrintLKP(); cout << endl;
	cout << "\nSearch element in first tree:\n";
	cout << tree.Search(14) << endl;
	Tree tree2;
	cout << "\nSecond tree = first tree:\n";
	tree2= tree;
	cout << "\nSecond tree(LKP):\n";
	tree2.PrintLKP();
	cout << "\n\nAdd 2 elements in first tree:\n";
	tree.Add(999, 77);
	tree.Add(-100, 70);
	tree.PrintLKP();
	cout << "\n\nSecond tree:\n";
	tree2.PrintLKP();
	cout << "\n\n";
	return 0;
}