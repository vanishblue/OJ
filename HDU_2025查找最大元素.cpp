#include <iostream>
using namespace std ;

int main()
{
	char c[128] ;
	int i, len ;
	while (gets(c))
	{
		len = strlen(c) ;
		int max = c[0] ;
		for (i=1; i<len; i++)
			if (c[i] > max)
				max = c[i] ;
		for (i=0; i<len; i++)
		{
			cout<<c[i] ;
			if (c[i] == max)
				cout<<"(max)" ;
		}
		cout<<endl ;
	}
	return 0 ;
}