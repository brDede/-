#include<stdio.h>
int main()
{	int n,i,zero,plus,minus;
	double x;
	while(scanf("%d",&n)!=EOF)//�������������һ��ѭ�� 
	{	
		if (n==0)
		break;
		zero=0,plus=0,minus=0;
		for(i=0;i<n;i++)//���ѭ������ͳ������ 
		{	
			scanf("%lf",&x);
			if(x>0)
			plus++;
			else if(x==0)
			zero++;
			else
			minus++;
		}
		printf("%d %d %d\n",minus,zero,plus);
	}
	return 0;
}
