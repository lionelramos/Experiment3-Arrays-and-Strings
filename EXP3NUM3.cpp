#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char main[150];
	int i;
	
		cout << "Enter a set of characters: ";
		cin >> main;
		
		cout << "The characters in reverse order:";
	for (i = strlen(main); i >= 0; i--)
	{

		cout << main[i];
	}
	cout << " " << endl;
	cout <<"Array size = "<< strlen(main) << endl;
	system("pause");

	return 0;
}