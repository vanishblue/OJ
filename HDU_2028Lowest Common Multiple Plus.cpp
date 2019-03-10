#include <iostream>
using namespace std ;
typedef unsigned int UL ;

UL gcd(UL x, UL y)
{
	UL min = y>x?x:y ;
	UL i ;
	for (i=min; i>1; i--)
		if (x%i==0 && y%i==0)
			break ;
	return i ;
}

int main()
{
	int n, i ;
	UL a[128] ;
	while (cin>>n)
	{
		for (i=0; i<n; i++)
			cin>>a[i] ;
		for (i=1; i<n; i++)
			a[i] = a[i-1]*a[i]/gcd(a[i-1],a[i]) ;
		cout<<a[n-1]<<endl ;
	}
	return 0 ;
}