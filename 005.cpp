#include<stdio.h>
int main()
{
	int i,x;
	for (int a=0;a<7;a++)
	{
		printf("请输入该同学的成绩:");
		scanf("%d",&i);
		getchar(); 
		if ((i<=100)&&(i>=85))
			x=1;
		else if ((i<=84)&&(i>=70))
			x=2;
		else if ((i<=69)&&(i>=60))
			x=3;
		else if ((i<=59)&&(i>=0))
			x=4;
		else
			x=0;
		switch(x)
		{
			case 1:printf("该同学分数等级：A\n");break;
			case 2:printf("该同学分数等级：B\n");break;
			case 3:printf("该同学分数等级：C\n");break;
			case 4:printf("不及格\n");break;
			default:printf("无法识别，请重新输入\n");break;
		}
	}
	return 0;
}
