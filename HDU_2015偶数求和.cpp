#include <iostream>
using namespace std ;

int main()
{
	int m, n, i, j ;
	int a[101] ;
	for (i=0; i<=100; i++)
		a[i] = 2*i ;
	while (cin>>n>>m)
	{
		for (i=1; i<=n/m; i++)
		{
			double sum=0 ;
			for (j=(i-1)*m+1; j<=i*m; j++)
				sum += a[j] ;
			if (i == 1)
				cout<<sum/m ;
			else
				cout<<" "<<sum/m ;
		}
		double sum=0 ;
		if (n%m != 0)
		{
			for (; j<=n; j++)
				sum += a[j] ;
			cout<<" "<<sum/(n%m) ;
		}
		cout<<endl ;
	}
	return 0 ;
}
