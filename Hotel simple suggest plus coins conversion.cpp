//My program helps you choose a hotel based on the number of hotel stars and services
#include<iostream>
#include<string>
using namespace std;
//I choose the hotel more or equal three starts
class Hotel_up3stars
{
protected:
	string nmae;
	string city;
	int numberroom;
	int price;
public:
	void set_name(string nmae) {
		cout << nmae;
	}
	void set_city(string city) {
		cout << city;
	}
	void set_numberrom(int numberroom) {
		cout << numberroom;
	}
	string get_name() {
		return nmae;
	}
	string get_city() {
		return city;
	}
	int get_numberroom() {
		return numberroom;
	}
};
class Hotel5stars :public Hotel_up3stars
{
public:
	~Hotel5stars() {
		cout << endl << "Thanks for choosing us and welcome.." << endl << endl;
		system("pause");
	}
	Hotel5stars(int x, string name, string c, int room) {
		if (price < 10000) {
			city = "Al khobar";
			nmae = "Ramada hotel";
			numberroom = 12;
			price = x;
		}
		else
		{
			cout << "O my dear close the program and try again \n And the hotel is not five stars, make sure please from the services and number of stars" << endl;
		}
	}
}client1(8000, "Ramada hotel", "AlKobar", 12);
class Hotel4stars :public Hotel_up3stars
{
public:
	Hotel4stars(int y, string name, string c, int room) {
		if (price < 5000) {
			city = "Al kharj";
			nmae = "E1 Hotel";
			numberroom = 9;
			price = y;
		}
		else
		{
			cout << "O my dear close the program and try again \n And the hotel is not four stars, make sure please from the services and number of stars" << endl;
		}
	}
}client2(3000,"E1 Hotel","Al Riyadh", 12);
class Hotel3stars :public Hotel_up3stars
{
public:
	Hotel3stars(int z, string name, string c, int room) {

		if (price < 1500) {
			city = "Abha";
			nmae = "Boudl Hotel";
			numberroom = 3;
			price = z;
		}
		else
		{
			cout << "O my dear close the program and try again \n And the hotel is not three stars, make sure please from the services and number of stars" << endl;
		}
	}

}client3(1200,"Boudl Hotel","Mhayal Aseer",7);

double BH(double BHD) {
	return BHD*9.95;
}

double AE(double AED) {
	return AED*1.02;
}

double KW(double KWD) {
	return KWD*12.36;
}

double OM(double OMR) {
	OMR *= 9.74;
	return OMR;
}

double QA(double QAR) {
	QAR *= 1.03;
	return QAR;
}

int main() {
	int m, code, *ptrm;
	ptrm = &m;
	double riyal;
	char answer;
	string email;
	cout << "Dear welcome .. enter how number stars you want the hotel ,it must be less five" << endl;
	cin >> *ptrm;
	switch (m)
	{
	case 3:
		client3.set_name("Boudl Hotel");
		cout << "\t";
		client3.set_city("Mhayal Aseer");
		cout << "\t";
		client3.set_numberrom(9);
		cout << "\n";
		break;

	case 4:
		client2.set_name("E1 Hotel");
		cout << "\t";
		client2.set_city("Al Riyadh");
		cout << "\t";
		client2.set_numberrom(17);
		cout << "\n";
		break;

	case 5:
		client1.set_name("Ramada hotel");
		cout << "\t";
		client1.set_city("Alkhobar");
		cout << "\t";
		client1.set_numberrom(5);
		cout << "\n";
		break;
		
	default:
		cout << "we sorry our client..now two star and a star hotel service is not available" << endl;
		break;
	}
	cout << "Dear Coustomer, enter your email if you want to receive offers" << endl;
	cout << "If you want enter Y" << endl;
	cin >> answer;
	if (answer =='y'||answer=='Y') {
		cout << "Enter the email" << endl;
		cin >> email;
	}
	cout << endl;
	cout << "if you want to convort from any coins from GCC to Riyal Saudi.. enter Y agine" << endl;
	cin >> answer;
	if (answer == 'y' || answer == 'Y') {
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
	}
	return 0;
}