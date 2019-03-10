#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
	int x, y, i, j, n ;
	while (cin>>x>>y && (x || y))
	{
		int flag=0 ;
		int sum=0 ;
		for (n=x; n<=y; n++)
		{
			sum = n*n+n+41 ;
			for (j=2; j<=sqrt(sum); j++)
			{
				if (sum%j==0 && sum!=j)
					flag = 1 ;
			}
		}
		if (flag == 1)
			cout<<"Sorry"<<endl ;
		else 
			cout<<"OK"<<endl ;
	}
	return 0 ;
}
