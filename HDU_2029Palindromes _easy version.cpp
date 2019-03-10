#include <iostream>
using namespace std ;

int main()
{
	int n, i ;
	char a[128] ;
	cin>>n ;
	char ch=getchar() ;
	while (n--)
	{
		int flag = 0 ;
		gets(a) ;
		int len = strlen(a) ;
		for (i=0; i<len/2; i++)
			if (a[i] != a[len-i-1])
				flag = 1 ;
		if (flag)
			cout<<"no"<<endl ;
		else
			cout<<"yes"<<endl ;
	}
	return 0 ;
}