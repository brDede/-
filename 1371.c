#include <stdio.h>
#include <math.h>
int main()
{	
	double n,m;
	while(scanf("%lf%lf",&n,&m)!=EOF)
	{	
		int i;
		double sum=n;//�����ʼ�� 
		for(i=1;i<m;i++)
		{
			n=sqrt(n);//��Ϊ��sum��ʼֵ����Ϊn
			sum=sum+n;//���Դ˴������ȸı� n��ֵ 
		}
		printf("%.2lf\n",sum);
	}
	return 0;
} 
