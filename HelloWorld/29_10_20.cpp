#include<conio.h>
#include<iostream>
#include<math.h>


int main()
{
	using namespace std;
	int k;
	cin >> k;	
	int n;
	cin >> n;
	int* a = new int[n];
	switch (k)
	{
	case 1:
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			int k1 = a[i];
			int s = 0;
			while (k1 > 0) {
				int d = k1 % 10;
				d = (pow(d, 3));
				s = s + d;
				k1= k1 / 10;
			}
			if (s == a[i])
				cout << "Armstrong Number!" << endl;
			else
				cout << "Not Armstrong!";
			
		}
		break;
	case 2:
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			int k1 = a[i];
			int s = 0;
			while (k1 > 0)
			{
				int d = k1 % 10;
				s = (s * 10) + d;
				k1 = k1 / 10;
			}
			if (s == a[i])
				cout << "Palindrome!" << endl;
			else
				cout << "Not Palindrome!" << endl;
		}
		break;
	
	default:
		cout << "wrong choice!";
		break;
	}


}
