#include<iostream>
using namespace std;

void copy(int *arr, int *arr2,int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr2[i];
	}
}
int *regrow(int *ptr, int in,int &size)
{
	int *t = new int[size+1];
	copy(t, ptr, size);
	t[size] = in;
	size++;
	delete[]ptr; 
	ptr = t;
	t = NULL;
	return ptr;
}
int *Anti_CLock(int *ptr, int size,int shift)
{
	int *point = new int[size];
	int j = 0;
	for (int i = shift; i < size; i++)
	{
		point[j] = ptr[i];
		j++;
	}
	int k = 0;
	for (int i = j; i < size; i++)
	{
		point[i] = ptr[k];
		k++;
	}
	for (int i = 0; i < size; i++)
	{
		ptr[i] = point[i];
	}
	delete[]point;
	return ptr;
}
int *Clock_wise(int *ptr, int size, int shift)
{
	int *point = new int[size];
	int j = size - shift;
	int k = 0;
	for (int i = shift; i < size; i++)
	{
		point[i] = ptr[k];
		k++;
	}
	for (int z = 0; z < shift; z++)
	{
		point[z] = ptr[k];
		k++;
	}
	for (int i = 0; i < size; i++)
	{
		ptr[i] = point[i];
	}
	delete[]point;
	return ptr;
}
int main()
{
	int size = 0;
	int *ptr = new int[size];
	int inp = 0;
	cout << "enter the values";
	while (true)
	{
		cin >> inp;
		if (inp == -1)
		{
			break;
		}
		ptr = regrow(ptr,inp,size);
	}
	char choice;
	cout << "enter the choice A/C";
	cin >> choice;
	if (choice == 'A')
	{
		cout << "enter the shift";
		int shift = 0;
		cin >> shift;
		ptr=Anti_CLock(ptr, size, shift);
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ' ';
		}
	}
	if (choice == 'C')
	{
		cout << "enter the shift";
		int shift = 0;
		cin >> shift;
		ptr = Clock_wise(ptr, size, shift);
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ' ';
		}
	}
}