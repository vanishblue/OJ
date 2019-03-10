#include <iostream>
using namespace std ;

int main()
{
	char a[1024] ;
	int n, i ;
	cin>>n ;
	char ch=getchar() ;
	while (n--)
	{
		gets(a) ;
		int len=strlen(a) ;
		int count=0 ;
		for (i=0; i<len; i++)
			if (a[i] < 0)
				count++ ;
		cout<<count/2<<endl ;
		
	}
	return 0 ;
}