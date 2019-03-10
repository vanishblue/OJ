#include <iostream>
using namespace std ;

int main()
{
	int n, i, j ;
	char ch ;
	cin>>n ;
	ch=getchar() ;
	while (n--)
	{
		int flag=0, count=0;
		while ((ch=getchar()) != '\n')
		{
			if (count==0 && ch>'0' && ch<'9')
				flag = 1 ;
			if (!isalnum(ch) && ch!='_')
				flag = 1 ;
			count++ ;
		}
		if (flag == 0)
			cout<<"yes"<<endl ;
		else
			cout<<"no"<<endl ;
	}
	return 0 ;
}