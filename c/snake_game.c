#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int hight=20,width=20,life=5,t=900;
int x,y,fruitx,fruity,gameover,score,flag;
int count=0,tailx[100],taily[100],r;
void control();
void input();
void view();
void setvalue();
int main()
{
	int p,q;
	setvalue();
while(!gameover)
{
	system("color 4a");
	view();
	input();
	control();
	for(p=0;p<9009;p++)
	{
		for(q=0;q<t;q++)
		{
			q++;
			q--;
		}
	}
}
printf("\n GAMEOVER");
	getch();
	return 0;
}
void control()
{
	int prevx,prevy,prev2x,prev2y,t;
	prevx=tailx[0];
	prevy=taily[0];
	tailx[0]=x;
	taily[0]=y;
	for(t=1;t<count;t++)
	{
		prev2x=tailx[t];
		prev2y=taily[t];
		tailx[t]=prevx;
		taily[t]=prevy;
		prevx=prev2x;
		prevy=prev2y;		
	}
	switch(flag)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
			break;
		case 4:
			x++;
			break;
		default:break;
	}
	if(x==fruitx&&y==fruity)
	{
	lable3:
	t=t-20;
	fruitx=rand()%20;
	if(fruitx==0)
	goto lable3;
	lable4:
	t=t-20;
	fruity=rand()%20;
	if(fruity==0)
	goto lable4;
	score+=10;	
	count++;
	}
	if(x==0||x==hight-1||y==0||y==width-1)
	{
		if(life)
		{
			if(x==0)
			{
				x=hight-1;
				life--;
			}
			else if(x==(hight-1))
			{
				x=0;
				life--;
			}
			else if(y==0)
			{
				y=width-1;
				life--;
			}
			else
			{
				y=0;
				life--;
			}
		}
		if(life==0)
		gameover=1;
	}
	for(r=0;r<count;r++)
	{
		if(x==tailx[r]&&y==taily[r])
		{
			gameover=1;
		}
	}
}
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a':
				flag=1;
				break;
			case 'd':
				flag=2;
				break;
			case 'w':
				flag=3;
				break;
			case 's':
				flag=4;
				break;
			default :break;
		}
	}
}
void view()
{
	int i,j,k;
	system("cls");
	for(i=0;i<hight;i++)
	{
		for(j=0;j<width;j++)
		{
		if(i==0||i==hight-1||j==0||j==width-1)
		{
				printf("*");
		}
		else
		{
			if(i==x&&j==y)
			{
					printf("0");
			}
			else if(i==fruitx&&j==fruity)
			{
					printf("F");
			}
			else
			{
				int top=0;
				for(k=0;k<count;k++)
				{
					if(i==tailx[k]&&j==taily[k])
					{
							printf("o");
							top=1;
					}
				}
				if(top==0)
					printf(" ");
			}
		}
		}
		printf("\n");
	}
	printf("SCORE=%d \n\n",score);
	printf("LIFE=%d",life);
}
void setvalue()
{
	x=hight/2;
	y=width/2;
	score=0;
	gameover=0;
	lable1:
	fruitx=rand()%20;
	if(fruitx==0)
	goto lable1;
	lable2:
	fruity=rand()%20;
	if(fruity==0)
	goto lable2;	
	
}

