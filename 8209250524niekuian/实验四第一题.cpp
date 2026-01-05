#include<iostream>
using namespace std;
int main()
{
	cout << "Enter ten numbers:";
	int a[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		bool f = false;
		for (int j = 0; j < count; j++)
		{
			if (a[j] == num)
			{
				f = true;
				break;
			}
		}
		if (!f)
		{
			a[count] = num;
			count++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++)
		cout << a[i] << " ";
	return 0;
}