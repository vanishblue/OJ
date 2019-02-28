#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
	double x ;
	while (cin >> x)
	{
		if (x>=0)
			cout<<fixed<<setprecision(2)<<x<<endl ;
		else
			cout<<fixed<<setprecision(2)<<double(-x)<<endl ;
	}
	return 0 ;
}