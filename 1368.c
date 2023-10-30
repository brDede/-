#define PI 3.1415927//定义pi参数 
#include<stdio.h>
int main()
{
	double r,v;
	while(~scanf("%lf",&r))//为了多组输入 
	{	
		getchar();//为了格式 
		v=4*(PI*r*r*r)/3;//球的体积公式 
		printf("%.3lf\n",v);//三位小数 
	}
	return 0;
}
