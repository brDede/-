#define PI 3.1415927//����pi���� 
#include<stdio.h>
int main()
{
	double r,v;
	while(~scanf("%lf",&r))//Ϊ�˶������� 
	{	
		getchar();//Ϊ�˸�ʽ 
		v=4*(PI*r*r*r)/3;//��������ʽ 
		printf("%.3lf\n",v);//��λС�� 
	}
	return 0;
}
