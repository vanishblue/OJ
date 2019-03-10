#include <iostream>
using namespace std ;

int main()
{
	int n, i, j ;
	int a[30][30] ;
	for (i=0; i<30; i++)
		for (j=0; j<=i; j++)
			a[i][j] = 1 ;
	while (cin>>n)
	{
		for (i=2; i<n; i++)
			for (j=1; j<i; j++)
			{
				a[i][j] = a[i-1][j-1] + a[i-1][j] ;
			}
		for (i=0; i<n; i++)
		{
			for (j=0; j<=i; j++)
			{
				if (j == 0) cout<<a[i][j] ;
				else
					cout<<" "<<a[i][j] ;
			}
			cout<<endl ;
		}
		cout<<endl ;
	}
	return 0 ;
}