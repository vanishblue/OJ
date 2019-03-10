#include <iostream>
using namespace std ;

int main()
{
	int i, n ;
	int a[3], b[3], c[3] ;
	cin>>n ;
	while (n--)
	{
		for (i=0; i<3; i++)
			cin>>a[i] ;
		for (i=0; i<3; i++)
			cin>>b[i] ;
		for (i=2; i>0; i--)
		{
			if (a[i]+b[i] >= 60)
				a[i-1]++ ;
			c[i] = (a[i]+b[i])%60 ;
		}
		c[0] = a[0] + b[0] ;
		cout<<c[0]<<' '<<c[1]<<' '<<c[2]<<endl ;
	}
	return 0 ;
}