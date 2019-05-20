#include <iostream>
using namespace std;

int main()
{
	int c;
	float tempA[8], tempB[8], tempC[8];

	for (int a = 1; a < 8; a++) {
		cout << "Enter Daily temperature (C) for Province A, Day " << a << " : ";
		cin >> tempA[a];
	}
	for (int b = 1; b < 8; b++) {
		cout << "Enter Daily temperature (C) for Province B, Day " << b << " : ";
		cin >> tempB[b];
	}
	for (int c = 1; c < 8; c++) {
		cout << "Enter Daily temperature for (C) Province C, Day " << c << " : ";
		cin >> tempC[c];
	}
		cout << " " << endl;
		cout << "List of temparature in 3 provinces within 7 days : " << endl;
	for (int a = 1; a < 8; a++) {
		cout << "The temperature in province A at day " << a << " is " << tempA[a] << " degrees celcius" << endl;
	}
		cout << " " << endl;
	for (int b = 1; b < 8; b++){
		cout << "The temperature in province B at day " << b << " is " << tempB[b] << " degrees celcius" << endl;
	}
	cout << " " << endl;
	for (int c = 1; c < 8; c++) {
		cout << "The temperature in province C at day " << c << " is " << tempC[c] << " degrees celcius" << endl;
	}
		cout << " " << endl;


	system("pause");
	return 0;
}