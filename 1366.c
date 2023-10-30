#include<stdio.h>
int main()
{
	char c1,c2,c3,c;//c1为min，c2为max，c为中间替换用变量 
	while(scanf("%c%c%c",&c1,&c2,&c3)!=EOF)//重复输入多组数据直至无数据 
	{	
		if(c1>c2)//如果c1大于c2则互换 
			{
				c=c1;
				c1=c2;
				c2=c;
			}
		if(c1>c3)
			{
				c=c1;
				c1=c3;
				c3=c;
			}
		if(c2>c3)
			{
				c=c2;
				c2=c3;
				c3=c; 
			}
		printf("%c %c %c\n",c1,c2,c3);//输出并换行 
		getchar();//用于读取每组数据中间的空格、换行 
	}
	return 0;
}


