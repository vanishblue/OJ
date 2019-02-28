#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
{
	int m, n, i, j ;
	cin>>m ;
	for (i=0; i<m; i++)
	{
		double sum=1 ;
		cin>>n ;
		for (j=2; j<=n; j++)
		{
			if (j%2 == 0)
				sum -= double(1)/double(j) ;
			else
				sum += double(1)/double(j) ;

		}
		cout<<fixed<<setprecision(2)<<sum<<endl ;
	}
	return 0 ;
}
