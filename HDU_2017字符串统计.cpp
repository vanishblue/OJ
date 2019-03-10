#include <iostream>
using namespace std ;

int main()
{
	int n, i ;
	char ch ;
	cin>>n ;
	ch = getchar() ;
	for (i=0; i<n; i++)
	{
		int count=0 ;
		while ((ch=getchar()) != '\n')
		{
			if (ch>=48 && ch <58)
				count++ ;
		}
		cout<<count<<endl ;
	}
	return 0 ;

}
