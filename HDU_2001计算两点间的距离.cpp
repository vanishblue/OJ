#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
{
	double a,b,c,d ;
	double s ;
	while (cin>>a>>b>>c>>d)
	{		
		s = sqrt(pow(a-c,2)+pow(b-d,2)) ;
		cout<<fixed<<setprecision(2)<<s<<endl ;

	}
	return 0 ;
}
	