//My program converse  from  any coins from GCC to riyal  

#include<iostream>
using namespace std;

float BH(double BHD) {
	return BHD*9.95;
}

float AE(double AED) {
	return AED*1.02;
}

float KW(double KWD) {
	return KWD*12.36;
}

float OM(double OMR) {
	OMR *= 9.74;
	return OMR;
}

float QA(double QAR) {
	QAR *= 1.03;
	return QAR;
}

int main()
{
	double riyal;
	int code;
	char ans;

	do{
		//Enter number to  conversion coins to Riyal Saudi
		cout << "Enter the number of money " << endl;
		cin >> riyal;

		cout << "Enter the code for country" << endl;
		cout << "if convert from Bahrain choose 1 " << endl;
		cout << "if convert from Arab Emirates choose 2 " << endl;
		cout << "if convert from Kuwait choose 3 " << endl;
		cout << "if convert from Oman choose 4" << endl;
		cout << "if convert from Qatar choose 5 " << endl;

		cin >> code;

		switch (code)
		{
		case 1:
			cout << BH(riyal) << " Riyal" << endl;
			break;
			
		case 2:
			cout << AE(riyal) << " Riyal" << endl;
			break;

		case 3:
			cout << KW(riyal) << " Riyal" << endl;
			break;

		case 4:
			cout << OM(riyal) << " Riyal" << endl;
			break;

		case 5:
			cout << QA(riyal) << " Riyal" << endl;
			break;

		default:
			cout << "sorry..your choosing coins not available now " << endl;
			cout << " but will u want for addition coins any country ? communicate on  meeshooo1415@gmail.com " << endl;
			break;
		}
		cout << endl << endl;
		cout << "Do you want to calculate the currency again ?" << endl;
		cout << "if you want to, press Y " << endl;
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');

		cout << "Thank you for using the program" << endl;
	

	system("pause");
	return 0;
}