#include <iostream>
using namespace std ;

int main()
{
	int i, a, b ;
	while (cin>>a>>b && (a || b))
	{
		int sum = a%1000 ;
		for (i=1; i<b; i++)
			sum = (sum*a)%1000 ;
		cout<<sum<<endl ;
	}
	return 0 ;
}