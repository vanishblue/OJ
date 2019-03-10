#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
	int n, x ;
	while (cin>>n)
	{
		int sum=1 ;
		for (int i=1; i<n; i++)
		{
			sum = (sum+1)*2 ;
			x = sum ;
		}
		cout<<x<<endl ;
	}
	return 0 ;
}
