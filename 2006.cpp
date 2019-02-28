/*#include <iostream>		//方法一
using namespace std ;

int main()
{
	int i, n ;
	int a[10000] ;
	while (cin>>n)
	{
		int sum = 1 ;
		for (i=0; i<n; i++)
		{
			cin>>a[i] ;
			if (a[i]%2 == 1)
				sum *= a[i] ;
		}
		cout<<sum<<endl ;
	}
	return 0 ;
}*/

/*#include <iostream>			//方法二
using namespace std ;

int main()
{
	int i, n ;
	int *a ;
	while (cin>>n)
	{
		int sum = 1 ;
		a = new int[n] ;
		for (i=0; i<n; i++)
		{
			cin>>a[i] ;
			if (a[i]%2 == 1)
				sum *= a[i] ;
		}
		cout<<sum<<endl ;
		delete []a ;
	}
	return 0 ;
}*/

#include <iostream>			//方法三,这种方法最简单
using namespace std ;

int main()
{
	int i, n ;
	while (cin>>n)
	{
		int sum = 1 ;
		int x ;
		for (i=0; i<n; i++)
		{
			cin>>x ;
			if (x%2 == 1)
				sum *= x ;
		}
		cout<<sum<<endl ;
	}
	return 0 ;
}