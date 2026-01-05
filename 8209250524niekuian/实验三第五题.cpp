#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	for (int i = 1; i <= 9; i++)
	{
		num++;
		num = num * 2;
	}
	cout << num;
	return 0;
}