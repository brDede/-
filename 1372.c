#include <stdio.h>
int main()
{
	int n,m,sign=0;
	while(scanf("%d%d",&n,&m)==EOF)
	{
		int i;
		for(i=n;i<=m;i++)
		{
			int iu,it,ih;//units,ten,hundreds,sign�����ж��Ƿ����no 
			iu=i%10;
			it=i/10%10;
			ih=i/100;//��Ϊ�̶���λ�����Բ���%
			if(i==iu*iu*iu+it*it*it+ih*ih*ih)
			{
			if(sign==1)
			printf(" ");
			printf("%d",i);
			sign=1; 
			}
		}
		if (sign==0)
		printf("no\n");
	}
	return 0;
}
