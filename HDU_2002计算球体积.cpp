#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
const double PI = 3.1415927 ;

int main()
{
	double r ;
	while (cin >> r)
	{
		double v = double(4)/double(3)*PI*pow(r,3) ;
		cout<<fixed<<setprecision(3)<<v<<endl ;
	}
	return 0 ;
}
