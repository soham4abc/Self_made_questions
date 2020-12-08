//#include<conio.h>
//#include<iostream>
//#include<math.h>
//
//int main()
//{
//	using namespace std;
//	int n;
//	cin >> n;
//	int end=0;
//	
//	
//		end=(2*n)-1;
//	 
//
//	int mid = end / 2;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int k1 = n + 1;
//		int k2 = n - 1;
//		int n1 = n;
//		for (int j = 1; j <= end; j++)
//		{
//			if (j < n) {
//				if (j <= i)
//				{
//					k1--;
//				}
//				cout << k1;
//			}
//			else if (j == n)
//			{
//				if (j <= i)
//				{
//					k1--;
//				}
//				cout << k1;
//				
//			}
//			
//			else {
//				//cout << k1;
//				if ((j-(n)) >=(n1))
//				{
//					if (k1 == 0)
//						k1 += 2;
//					else
//						k1++;
//
//				}
//				n1--;
//				cout << k1;
//				
//			}
//			
//		}
//		 
//		cout << endl;
//	}
//}