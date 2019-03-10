#include <iostream>
using namespace std ;

int main()
{
	int n, i, x ;
	int a[100], b[100] ;
	int num[10] = {0,1,1,2,2,1,2,2,3,3} ;
	while (cin>>n && n)
	{
		int count=0 ;
		for (i=0; i<n; i++)
		{
			cin>>a[i] ;
			count += a[i]/100 ;
			x = a[i]%100/10 ;
			if (x >= 5)
				count += x-4 ;
			else
				count += x ;
			count += num[a[i]%100%10] ;
		}
		cout<<count<<endl ;

	}
	return 0 ;

}
