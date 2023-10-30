#include<stdio.h>
int main()
{
	double x1,x2,y1,y2,d;//用double取代float妈妈再也不用担心数据溢出 
	while(~scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2))//输入多组数据 
	{
		getchar();//取掉空格or换行 
		d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//sqrt为开平方根 ，两点距离公式 
		printf("%.2lf\n",d);//限定两位小数结果 
	}
	return 0;
}

