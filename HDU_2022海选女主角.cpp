#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
{
	//int *a ;
	int m, n, i, j ;
	while (cin>>m>>n)
	{
		double x, min=0 ;
		int row, col ;
		for (i=0; i<m; i++)
			for (j=0; j<n; j++)
			{
				cin>>x ;				
				if (fabs(x) > fabs(min))
				{
					min = x ;
					row = i ;
					col = j ;
				}
			}
		cout<<row+1<<" "<<col+1<<" "<<fixed<<setprecision(0)<<min<<endl ;
	}
	return 0 ;
}
