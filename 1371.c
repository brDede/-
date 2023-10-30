#include <stdio.h>
#include <math.h>
int main()
{	
	double n,m;
	while(scanf("%lf%lf",&n,&m)!=EOF)
	{	
		int i;
		double sum=n;//定义初始量 
		for(i=1;i<m;i++)
		{
			n=sqrt(n);//因为将sum初始值定义为n
			sum=sum+n;//所以此处可以先改变 n的值 
		}
		printf("%.2lf\n",sum);
	}
	return 0;
} 
