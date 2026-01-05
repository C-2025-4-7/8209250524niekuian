#include<iostream>
using namespace std;
int main()
{
	int num[10], count = 10;
	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < count - 1; j++)
			if (num[j] > num[j + 1])
			{
				int temp;
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	for (int j = 0; j < 10; j++)
		cout << num[j] << " ";
	return 0;
}