//#include<conio.h>
//#include<iostream>
//#include<math.h>
//
//int main()
//{
//	using namespace std;
//	int n;
//
//	cin >> n; //number of rows
//	int k = 1; //constant for count
//	for (int i = 0; i <= n; i++) //per line er jonno loop
//	{
//		for (int s = 0; s <= (n - i); s++) // space er jonno
//		{
//			cout << " ";
//		}
//		char a = 'A';
//
//		for (int sym = 1; sym <= ((2 * i) - 1); sym++) // char outup er jonno
//		{
//			//cout << sym;
//			if (sym < k)
//			{
//				cout << a << "";
//				a++;
//			}
//			else if (sym == k)
//			{
//				a -= 2;
//				cout << a<<"";
//				a--;
//
//			}
//			else
//			{
//				cout << a << "";
//				a--;
//			}
//
//		}
//		k++;
//		cout << endl;
//	}
//	k-=2;
//	for (int i = (n - 1); i >= 1; i--)
//	{
//		for (int s = 0; s <= (n - i); s++)
//		{
//			cout << " ";
//		}
//		char a = 'A';
//
//		for (int sym = 1; sym <= ((2 * i) - 1); sym++)
//		{
//			//cout <<k;
//			if (sym < k)
//			{
//				cout << a << "";
//				a++;
//			}
//			else if (sym == k)
//			{
//				a -= 2;
//				cout << a << "";
//				a--;
//
//			}
//			else
//			{
//				cout << a << "";
//				a--;
//			}
//
//		}
//		k--;
//		cout << endl;
//	}
//
//	return 0;
//}