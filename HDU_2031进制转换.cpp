#include <iostream>
using namespace std ;

int main()
{
	int N, R, i ;
	char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'} ;
	int a[128] ;
	while (cin>>N>>R)
	{
		if (N<0) cout<<'-' ;
		if (N<0) N = -N ;
		if (N == 0) cout<<'0' ;
		for (i=0; N>0; i++)
		{
			a[i] = N%R ;
			N = N/R ;
		}
		
		for (--i; i>=0; i--)
			cout<<num[a[i]] ;
		cout<<endl ;
	}
	return 0 ;
}