#include<iostream>
using namespace std;
bool prime(int x) {

	if (x % 2 == 0)
		return false;

	else if (x % 3 == 0)
		return false;

	else if (x % 5 == 0)
		return false;
	else if (x % 7 == 0)
		return false;


	return true;
}

int main() {

	cout << "The prime numbers from 1 to 100." << endl;
	cout << "2\t3\t5\t7\t";
	for (int i = 2; i < 100; i++) {

		if (prime(i)) {
			cout << i << "\t";
		}
	}
	system("pause");
	return 0;
}