#include <iostream>
using namespace std;

int main()
{
	int i, Lnum, Snum, num[10],x,y;
	float sum = 0.0, average;
	bool option1 = false;
	
	cout << "Enter ten numbers: "<<endl;

	for (int a = 0; a < 10; a++) {
		cin >> num[a];
	}
	Lnum = Snum = num[0];

	for (i = 0; i < 10; ++i)
	{
		;
		sum += num[i];
		average = sum / 10;
	}
	
	for (int b = 0; b < 10; b++) {
		if (num[b] > Lnum) {
			Lnum = num[b];
			option1 = false;
				}
		else if (num[b] < Snum) {
			Snum = num[b];
			option1 = false;
		}

		else if (num[b] = {b==b})
		{
			option1 = true;
		}
	}
	cout << "Sum of 10 numbers = " << sum << endl;
	cout << "Average = " << average<<endl;
	if (option1 == true)
	{
		cout << "All numbers are equal!" << endl;
	}
	else
	{
		cout << "The smallest number is : " << Snum << endl;
		cout << "The greatest number is : " << Lnum << endl;
	}
	
	system("pause");
	return 0;
}