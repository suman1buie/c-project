#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void main()
{
	int h=0,m=0,s=0;
	int a=20,b=8;
	int ch;
	double i;
	system("color 1a");
	printf("enter the HH MM and SE :\n");
	scanf("%d%d%d",&h,&m,&s);
	
	label1:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{		
				system("cls");
				gotoxy(45,10);
				printf("\n *clock* \n");
				printf("\n %d : %d : %d \n",h,m,s);
				for(i=0;i<69889989;i++)
				{
						i++;
						i--;
						}
				}
					s=0;
					}
     		 m=0;	}
      h=0;
      
	goto label1;
getch();
}
