#include <stdio.h>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)==EOF)
	{
		int i，sign=0;
		for(i=n;i<=m;i++)
		{
			int iu,it,ih;//units,ten,hundreds,sign用于判断是否输出no 
			iu=i%10;
			it=i/10%10;
			ih=i/100;//因为固定三位数所以不用%
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
		else
		printf(" ");
	}
	return 0;
}
