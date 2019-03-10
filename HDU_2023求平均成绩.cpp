#include <iostream>				//´ý¼ò»¯¡£
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
{
	int m, n, i, j ;
	double a[51][6] ;
	while (cin>>n>>m)
	{
		int count=0 ;
		int flag=0 ;
		for (i=0; i<n; i++)
			a[i][m] = 0 ;
		for (i=0; i<m; i++)
			a[n][i] = 0 ;
		for (i=0; i<n; i++)
			for (j=0; j<m; j++)
			{
				cin>>a[i][j] ;
				a[i][m] += a[i][j]/m ;
				a[n][j] += a[i][j]/m ;
			}
		cout<<fixed<<setprecision(2)<<a[0][m] ;
		for (i=1; i<n; i++)
			cout<<" "<<fixed<<setprecision(2)<<a[i][m] ;
		cout<<endl ;
		cout<<fixed<<setprecision(2)<<a[n][0] ;
		for (i=1; i<m; i++)
			cout<<" "<<fixed<<setprecision(2)<<a[n][i] ;
		cout<<endl ;
		for (i=0; i<n; i++)
		{
			flag = 0 ;
			for (j=0; j<m; j++)
				if (a[i][j] < a[n][j])
					flag = 1 ;
			if (flag == 0)
				count++ ;
		}

		cout<<count<<endl ;
	}
	return 0 ;
}
