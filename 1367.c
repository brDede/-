#include<stdio.h>
int main()
{
	double x1,x2,y1,y2,d;//��doubleȡ��float������Ҳ���õ���������� 
	while(~scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2))//����������� 
	{
		getchar();//ȡ���ո�or���� 
		d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//sqrtΪ��ƽ���� ��������빫ʽ 
		printf("%.2lf\n",d);//�޶���λС����� 
	}
	return 0;
}

