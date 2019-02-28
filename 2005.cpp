#include <iostream>
using namespace std ;

int main()
{
	int a, b, c, i ;
	int n[12] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
	char m[2] ;
	while (cin>>a>>m[0]>>b>>m[1]>>c)//while (scanf("%d/%d/%d",&a,&b,&c) != EOF)
	{
		int data = 0, flag = 0 ;
		if (a%400==0 || (a%4==0 && a%100!=0))
			flag = 1 ;		//±Ì æ»ÚƒÍ
		for (i=0; i<b-1; i++)
			data += n[i] ;
		data += c ;
		if (b>2 && flag==1)
			data++ ;
		cout<<data<<endl ;

	}
	return 0 ;
}
