#include <iostream>
using namespace std;
int main()
{
	int numbermonth;
	cout << "entree the number of month";
	cin >> numbermonth;
	switch (numbermonth) {
	case 1:
		cout << "THE MONTH IS JUNARY"<<endl;
		break;
	case 2:
		cout << "the month is febrary" << endl;
		break;
	case 3:
		cout << "the month is march" << endl;
		break;
	case 4:
		cout << "the month is april" << ('\n');
		break;
	case 5:
		cout << "the month is may" << ('\n');
			break;
	case 6:
		cout << "the month is june" << ('\n');
		break;
	case 7:
		cout << "the month is july" << ('\n');
		break;
	case 8:
		cout << "the month is august" << ('\n');
		break;
	case 9:
		cout << "the month is setember" << ('\n');
		break;
	case 10:
		cout << "the month is october" << ('\n');
		break;
	case 11:
		cout << "the month is novamber" << ('\n');
	case 12:
		cout << "the month is decamber" << ('\n');
		break;
	default:
		cout << "the number is error entre the right month";
	}
}
