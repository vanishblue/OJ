#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std ;

int compare(const void *a, const void *b)
{
	return (abs(*(int *)b)-abs(*(int *)a)) ;
}

int main()
{
	int n, i ;
	int a[100] ;
	while (cin>>n && n)
	{
		for (i=0; i<n; i++)
			cin>>a[i] ;
		qsort(a, n, sizeof(int), compare) ;
		for (i=0; i<n; i++)
		{
			if (i == 0) cout<<a[i] ;
			else cout<<" "<<a[i] ;
		}
		cout<<endl ;
	}
	return 0 ;

}
