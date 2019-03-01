#include<iostream>
using namespace std;

int sum_recursion(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n + sum_recursion(n - 1);
	}
}
int fib(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int binary_conversion(int n,int *ptr,int s)
{
	int r = 0;
	if (n == 0)
	{
		for (int i = s-1 ; i > 0; i--)
		{
			cout << ptr[i] << ' ';
		}
	}
	else
	{
		ptr[s] = n % 2;
		//cout << ptr[s] << ' ';
		return binary_conversion(n / 2, ptr, s + 1);
	}
}
int digit_count(int n,int count)
{
	if (n==0)
	{
		return count;
	}
	return digit_count(n / 10, count + 1);
}
int sum_of_digit(int n, int sum)//,int *ptr,int s)
{
	if (n == 0)
	{
		return sum;
	}
	int r = n % 10;
	sum = sum + r;
	return sum_of_digit(n / 10, sum);
}
int grater_then_seven(int n,int c)
{
	if (n == 0)
	{
		return c;
	}
	int r = n % 10;
	if (r > 7)
	{
		c++;
		return grater_then_seven(n / 10, c);
	}
	else
		return grater_then_seven(n / 10, c);
}
int reverse_digit(int n, int s)
{
	if (n == 0)
	{
		return s;
	}
	else
	{
		int r = n % 10;
		s = s * 10 + r;
		return reverse_digit(n / 10, s);
	}
}
int GCD(int A, int B)
{
	if (A%B == 0)
	{
		return B;
	}
	else
		return GCD(B, A%B);
}
bool Pallendrom(int arr[],int i,int size,int l)
{
	if(l==0)
	{
		return true;
	}
	if(arr[i]!=arr[size])
	{
		cout<<"not"<<endl;
		return false;
	}
	else
		return Pallendrom(arr,i+1,size-1,l-1);
		
}
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int size=5;
	int l=size/2;
	//size=size/2;
	if(Pallendrom(arr,0,size-1,l)==true)
	{
		cout<<"pallendrom";
	}
	//t1;
	//cout << sum_recursion(10);
	//t2
	//cout << fib(8);
	/*
	t3
	int arr[50];
	for (int i = 0; i < 50; i++)
	{
		arr[i] = -1;
	}
	cout << binary_conversion(35, arr, 0);*/
	//t4
	//cout << sum_of_digit(416395, 0);
	//t5
	//cout << grater_then_seven(456799, 0);
	//t6
	//cout << GCD(24, 36);
	//t7
	//cout << reverse_digit(456799,0);
}