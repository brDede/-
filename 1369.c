#include <stdio.h>
int main()
{
	double x;
	while(~scanf("%lf",&x))
	{	
		getchar();//提取多组数据中空格 
		printf("%.2lf\n",fabs(x));//fabs函数直接输出绝对值 
	}
	return 0;
}
