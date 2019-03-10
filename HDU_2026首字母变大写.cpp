#include <iostream>
using namespace std ;

int main()
{
	char c[128] ;
	int len, i ;
	while (gets(c))
	{
		len = strlen(c) ;
		c[0] -= 32 ;
		cout<<c[0] ;
		for (i=1; i<len; i++)
		{
			if (c[i] == ' ')
				c[i+1] -= 32 ;
			cout<<c[i] ;
		}
		cout<<endl ;
	}
	return 0 ;
}