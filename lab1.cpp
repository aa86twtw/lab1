#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number;
	cout <<"Please enter a number"<<endl;
	cin >> number;
	cout << number << " ";
	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number = number / 2;
		}
		else number = number * 3 + 1;

		cout << number<<" ";

	}
	


	system("pause");
	return 0;
	

}