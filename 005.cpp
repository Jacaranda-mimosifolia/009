#include<stdio.h>
int main()
{
	int i,x;
	for (int a=0;a<7;a++)
	{
		printf("�������ͬѧ�ĳɼ�:");
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
			case 1:printf("��ͬѧ�����ȼ���A\n");break;
			case 2:printf("��ͬѧ�����ȼ���B\n");break;
			case 3:printf("��ͬѧ�����ȼ���C\n");break;
			case 4:printf("������\n");break;
			default:printf("�޷�ʶ������������\n");break;
		}
	}
	return 0;
}
