#include <iostream>
using namespace std;
int main()
{
	int matrix[2][2];
	int sum = 0;
	cout << "entre 4 value :";
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			cout << "Element [" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
			sum += matrix[i][j];
		}
	}
	cout << "the sum of all elents is " << sum;

}

