#include <stdio.h>
int main()
{
	double x;
	while(~scanf("%lf",&x))
	{	
		getchar();//��ȡ���������пո� 
		printf("%.2lf\n",fabs(x));//fabs����ֱ���������ֵ 
	}
	return 0;
}
