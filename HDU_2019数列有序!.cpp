#include <iostream>
using namespace std ;

int main()
{
	int n, m, i ;
	int a[101] ;
	while (cin>>n>>m && (n || m))
	{
		for (i=0; i<n; i++)
			cin>>a[i] ;
		for (i=n-1; a[i]>m; i--)
			a[i+1] = a[i] ;
		a[i+1] = m ;
		for (i=0; i<=n; i++)
		{
			if (i == 0)
				cout<<a[i] ;
			else
				cout<<" "<<a[i] ;
		}
		cout<<endl ;
	}
	return 0 ;

}
