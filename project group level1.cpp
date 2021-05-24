//Our program represents the identity of the user
#include<iostream>
#include<string>
using namespace std;
unsigned int Day, month, year, your_birthday;

int birth2000() {

	int yy, y;
	yy = year / 12;
	y = year % 12;
	your_birthday = (yy + y + (y / 4) + 2) % 7;

	switch (your_birthday)
	{
	case 0:
		cout << "you were born on Saturday." << endl;
		break;
	case 1:
		cout << "you were born on Sunday." << endl;
		break;
	case 2:
		cout << "you were born on Monday." << endl;
		break;
	case 3:
		cout << "you were born on Tuesday." << endl;
		break;
	case 4:
		cout << "you were born on Wednesday." << endl;
		break;
	case 5:
		cout << "you were born on Thursday." << endl;
		break;
	case 6:
		cout << "you were born on Fraiday." << endl;
		break;
	}
	cout << endl;
	return 0;
}

int birth90() {

	int yy, y;
	yy = year / 12;
	y = year % 12;
	your_birthday = (yy + y + (y / 4) + 3) % 7;

	switch (your_birthday)
	{
	case 0:
		cout << "you were born on Saturday." << endl;
		break;
	case 1:
		cout << "you were born on Sunday." << endl;
		break;
	case 2:
		cout << "you were born on Monday." << endl;
		break;
	case 3:
		cout << "you were born on Tuesday." << endl;
		break;
	case 4:
		cout << "you were born on Wednesday." << endl;
		break;
	case 5:
		cout << "you were born on Thursday." << endl;
		break;
	case 6:
		cout << "you were born on Fraiday." << endl;
		break;
	}
	cout << endl;
	return 0;
}

int birth80() {

	int yy, y;
	yy = year / 12;
	y = year % 12;
	your_birthday = (yy + y + (y / 4) + 5) % 7;

	switch (your_birthday)
	{
	case 0:
		cout << "you were born on Saturday." << endl;
		break;
	case 1:
		cout << "you were born on Sunday." << endl;
		break;
	case 2:
		cout << "you were born on Monday." << endl;
		break;
	case 3:
		cout << "you were born on Tuesday." << endl;
		break;
	case 4:
		cout << "you were born on Wednesday." << endl;
		break;
	case 5:
		cout << "you were born on Thursday." << endl;
		break;
	case 6:
		cout << "you were born on Fraiday." << endl;
		break;
	}
	cout << endl;
	return 0;
}

int main() {

	int const row = 3, col = 3;
	int idn[row][col], i, j, age, birthyear, year2 = 2019;
	string name[3], Name2[2], x1 = "Asmaa", x2 = "Reem", x3 = "Fouziyah", x4 = "Mashael", x5 = "Manar", y1 = "Hazazi", y2 = "Alshahri", y3 = "Aldossery", y4 = "Alasmari", y5 = "Hussain";

	cout << "**you should enter your information and 3 members of your family**" << endl;
	cout << "enter the names :" << endl;
	for (i = 0; i < 3; i++) {
		getline(cin, name[i]);
	}
	cout << "enter the date of birth in order (day,month,year):" << endl;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> idn[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		cout << "name:" << name[i] << endl;
		for (j = 0; j < 3; j++) {
			cout << idn[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	//This step join the first user name with the last name
	cout << "Welcome Dear " << endl;
	cout << "enter the first name and last name :" << endl;
	for (int i = 0;i<2;i++) {
		getline(cin, Name2[i]);
		cout << Name2[i] << " ";
	}
	cout << endl;
	//now calculate the age of the user
	cout << "enter your birth year " << endl;
	cin >> birthyear;
	age = year2 - birthyear;
	cout << "your age = " << age << endl;


	//It's time to know your birth day from your date of birth
	cout << "Enter your birthday. " << endl;
	cin >> Day;

	if (Day <= 31) {
		cout << "Enter your month birth " << endl;
		cin >> month;
		if (month <= 12) {
			cout << "Enter last two number right your year birth " << endl;
			cin >> year;


			//year of birth contains four numbers such as 2010 Write 10
			if (year <= 99 && year >= 00) {
				cout << Day << " / " << month << endl;
				cout << endl;
				switch (year)
				{
				case 80:
					cout << birth80();
					break;
				case 81:
					cout << birth80();
					break;
				case 82:
					cout << birth80();
					break;
				case 83:
					cout << birth80();
					break;
				case 84:
					cout << birth80();
					break;
				case 85:
					cout << birth80();
					break;
				case 86:
					cout << birth80();
					break;
				case 87:
					cout << birth80();
					break;
				case 88:
					cout << birth80();
					break;
				case 89:
					cout << birth80();
					break;

				case 90:
					cout << birth90();
					break;
				case 91:
					cout << birth90();
					break;
				case 92:
					cout << birth90();
					break;
				case 93:
					cout << birth90();
					break;
				case 94:
					cout << birth90();
					break;
				case 95:
					cout << birth90();
					break;
				case 96:
					cout << birth90();
					break;
				case 97:
					cout << birth90();
					break;
				case 98:
					cout << birth90();
					break;
				case 99:
					cout << birth90();
					break;

				case 00:
					cout << birth2000();
					break;
				case 01:
					cout << birth2000();
					break;
				case 02:
					cout << birth2000();
					break;
				case 03:
					cout << birth2000();
					break;
				case 04:
					cout << birth2000();
					break;
				case 05:
					cout << birth2000();
					break;
				case 06:
					cout << birth2000();
					break;
				case 07:
					cout << birth2000();
					break;
				case 8:
					cout << birth2000();
					break;
				case 9:
					cout << birth2000();
					break;
				case 10:
					cout << birth2000();
					break;
				case 11:
					cout << birth2000();
					break;
				case 12:
					cout << birth2000();
					break;
				case 13:
					cout << birth2000();
					break;
				case 14:
					cout << birth2000();
					break;
				case 15:
					cout << birth2000();
					break;
				case 16:
					cout << birth2000();
					break;
				case 17:
					cout << birth2000();
					break;
				case 18:
					cout << birth2000();
					break;
				case 19:
					cout << birth2000();
					break;

				default:
					cout << "The program can not calculate your age ." << endl;
					break;
				}
			}
			else
			{
				cout << "cheeck out the program and try again." << endl;
			}

		}

		//if a mounth number is entered more than 12
		else
		{
			cout << "We don't have more than 12 month of a year " << endl;
			cout << "cheeck out th program and try again." << endl;
		}
	}
	//if a day number is entered more than 32
	else
	{
		cout << "We don't have more than 31 day of a month " << endl;
		cout << "cheeck out th program and try again." << endl;
	}
	system("pause");
	cout << "\n The students done work on this project are : " << endl;

	cout << x1 << "  " << y1 << endl;
	cout << x2 << "  " << y2 << endl;
	cout << x3 << "  " << y3 << endl;
	cout << x4 << "  " << y4 << endl;
	cout << x5 << "  " << y5 << endl;
	cout << "\n We hope you like it \n" << endl;

	system("pause");
	return 0;
}
