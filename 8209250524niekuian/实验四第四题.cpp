#include<iostream>
using namespace std;
const int max = 80;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else list3[k++] = list2[j++];

	}
	while (i < size1)
		list3[k++] = list1[i++];
	while (j < size2)
		list3[k++] = list2[j++];
}
int main()
{
	int size1, size2;
	int list1[80], list2[80], list3[160];
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << endl;
	cin >> size2;
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size1 - 1; j++)
			if (list1[j] > list1[j + 1])
			{
				int temp;
				temp = list1[j];
				list1[j] = list1[j + 1];
				list1[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	bool change = true;
	do
	{
		change = false;
		for (int j = 0; j < size2 - 1; j++)
			if (list2[j] > list2[j + 1])
			{
				int temp;
				temp = list2[j];
				list2[j] = list2[j + 1];
				list2[j + 1] = temp;
				change = true;
			}
	} while (change);
	merge(list1, size1, list2, size2, list3);
	cout << "merged list:";
	for (int t = 0; t < size1 + size2; t++)
	{
		cout << list3[t] << " ";
	}

	return 0;
}