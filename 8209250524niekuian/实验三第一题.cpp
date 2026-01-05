#include<iostream>
using namespace std;
int max(int m, int n)
{
	if (n == 0)
		return m;
	return max(n, m % n);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "他们的最大公约数是" << max(a, b) << endl;
	cout << "他们的最小公倍数是" << a * b / max(a, b) << endl;
	return 0;
}