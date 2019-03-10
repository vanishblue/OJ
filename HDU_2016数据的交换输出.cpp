#include <iostream>
using namespace std ;

int main()
{
	int n, i ;
	int a[100] ;
	while (cin>>n && n)
	{
		int min = 0 ;
		for (i=0; i<n; i++)
		{
			cin>>a[i] ;
			if (a[i] < a[min])
				min = i ;
		}
		swap(a[0], a[min]) ;
		for (i=0; i<n; i++)
		{
			if (i==0)
				cout<<a[i] ;
			else
				cout<<" "<<a[i] ;
		}
		cout<<endl ;
	}
	return 0 ;
}