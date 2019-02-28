#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
	int m, n, i ;
	while (cin>>m>>n)
	{
		if (m > n)			//此题需要注意：m可能大于n
		{
			int t = m ;
			m = n ;
			n = t ;
		}
		int sum1=0, sum2=0 ;
		for (i=m; i<=n; i++)
		{
			if (i%2 == 0)
				sum1 += pow(i, 2) ;
			else
				sum2 += pow(i, 3) ;
		}
		cout<<sum1<<" "<<sum2<<endl ;
	}
	return 0 ;
}