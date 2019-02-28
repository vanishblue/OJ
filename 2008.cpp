#include <iostream>
using namespace std ;

int main()
{
	int i, n ;
	while (cin>>n)
	{
		int a=0, b=0, c=0 ;
		double x ;
		if (n == 0)
			exit(0) ;
		for (i=0; i<n; i++)
		{
			cin>>x ;
			if (x < 0) a++ ;
			else if (x == 0) b++ ;
			else c++ ;
		}
		cout<<a<<" "<<b<<" "<<c<<endl ;
	}
	return 0 ;
}
