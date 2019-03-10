#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
	int n ;
	while (cin>>n)
	{
		double sum=0, x ;
		double max =0, min=100 ;
		for (int i=0; i<n; i++)
		{
			cin>>x ;
			sum += x ;
			if (x > max)
				max = x ;
			if (x < min)
				min = x ;
		}
		sum = sum - max - min ;
		sum = sum / (n-2) ;
		cout<<fixed<<setprecision(2)<<sum<<endl ;
	}
	

	return 0 ;
}
