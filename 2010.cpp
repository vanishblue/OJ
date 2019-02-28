#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
	int m, n, i, a, b, c ;
	while (cin>>m>>n)
	{
		int flag=0 ;
		int sum=0 ;
		for (i=m; i<=n; i++)
		{
			c = i%10 ;
			b = (i/10)%10 ;
			a = i/100 ;
			sum = pow(a,3)+pow(b,3)+pow(c,3) ;
			if (i == sum)
			{
				if (flag == 0)
				{
					cout<<i ;
					flag = 1 ;
				}
				else
					cout<<" "<<i ;
			}
		}
		if (flag == 0)
			cout<<"no" ;
		cout<<endl ;
	}
	return 0 ;
}
