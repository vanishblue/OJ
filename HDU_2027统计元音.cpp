#include <iostream>
using namespace std ;

int main()
{
	char a[128] ;
	int num[5] ;
	char str[] = {'a','e','i','o','u'} ;
	int len, i, n ;
	cin>>n ;
	char c = getchar() ;
	while (n--)
	{
		gets(a) ;
		memset(num, 0, sizeof(num)) ;
		len = strlen(a) ;
		for (i=0; i<len; i++)
		{
			if (a[i] == 'a')
				num[0]++ ;
			if (a[i] == 'e')
				num[1]++ ;
			if (a[i] == 'i')
				num[2]++ ;
			if (a[i] == 'o')
				num[3]++ ;
			if (a[i] == 'u')
				num[4]++ ;
		}
		for (i=0; i<5; i++)
			cout<<str[i]<<":"<<num[i]<<endl ;
		if (n)
			cout<<endl ;
	}
	return 0 ;
}