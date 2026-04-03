#include<iostream>
using namespace std;
int isprime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void prime()
{
	int count = 0;
	int num = 2;
	cout << "first 10 prime numbers are:";
	while (count < 10)
	{
		if (isprime(num) == 1)
		{
			cout << num << " ";
			count++;
		}
		num++;
	}
	cout << endl;
}
void reverseprime()
{
	int primes[10];
	int count = 0;
	int num = 2;
	while (count < 10)
	{
		if (isprime(num) == 1)
		{
			primes[count] = num;
			count++;
		}
		num++;
	}
	cout << "reverse prime numbers are: ";
	for (int i = 9; i >= 0; i--)
	{
		cout << primes[i] << " ";
	}
	cout << endl;
}
int main()
{
	int number;
	cout << "Enter a positive integer: ";
	cin >> number;
	if (isprime(number) == 1)
	{
		cout << number << " is a prime number." << endl;
	}
	else
	{
		cout << number << " is not a prime number." << endl;
	}
	prime();
	reverseprime();
	return 0;
}