#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
	int i, j, n, m ;
	int a[100], b[100], flag[100] ;
	while (cin>>n>>m && (n || m))
	{
		int tag=0 ;
		memset(flag, 0, sizeof(flag)) ;
		for (i=0; i<n; i++)
			cin>>a[i] ;
		for (i=0; i<m; i++)
			cin>>b[i] ;
		sort(a, a+n) ;
		for (i=0; i<n; i++)
			for (j=0; j<m; j++)
				if (a[i] == b[j])
				{
					flag[i] = 1 ;
				}
		for (i=0; i<n; i++)
			if (flag[i] == 0)
			{
				cout<<a[i]<<' ' ;
				tag++ ;
			}
		if (tag == 0)
			cout<<"NULL" ;
		cout<<endl ;


	}
	return 0 ;
}