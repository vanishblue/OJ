#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
{
	double m, n, i ;			//运行第一次错在没有把m改成double型
	while (cin>>m>>n)
	{
		double sum=m, x ;
		for (i=1; i<n; i++)
		{
			x = sqrt(m) ;
			sum += x ;
			m = x ;
		}
		cout<<fixed<<setprecision(2)<<sum<<endl ;
	}
	return 0 ;
}
