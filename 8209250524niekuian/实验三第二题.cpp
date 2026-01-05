#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) return false;
	if (num == 2)return true;
	for (int i = 2; i * 2 <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int a = 1, j = 0;
	for (int i = 1; i <= 200; i++)
	{
		if (is_prime(a) == 1)
		{
			cout << a << " ";
			j++;
			if (j % 10 == 0)
				cout << '\n';
		}
		a++;
	}
	return 0;
}