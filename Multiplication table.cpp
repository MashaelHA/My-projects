#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int col, row;
	cout << "    ";
	for (col = 1; col <= 10; col++) {
		cout << setw(4) << col << "  ";
	}
	cout << endl;
	cout << "    ";

	for (col = 1; col <= 10; col++) {
		cout << "------";
	}
	cout << endl;

	for (row = 1; row <= 10; row++) {
		cout << setw(4) << row << "x";
		for (col = 1; col <= 10; col++) {
			cout << setw(4) << col * row << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}