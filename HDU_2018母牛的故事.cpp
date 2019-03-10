#include <iostream>
using namespace std ;

int fun(int n)
{
	for (int i=1; i<5; i++)
		if (n == i) return i ;
	if (n == 5) return 6 ;
	return fun(n-1)+fun(n-3) ;
}

int main()
{
	int n, i ;
	while (cin>>n && n)
		cout<<fun(n)<<endl ;
	return 0 ;

}
