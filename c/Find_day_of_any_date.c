#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int day,month,year,total;
int Ycode(int);
int Mcode(int);
void Daycode(int);
int main()
{
	int c1,c2,p,q,total,l,d;
	printf("enter the date in a order DD:MM:YY \n");
	scanf("%d%d%d",&day,&month,&year);
	c1=year/100;
	c2=year%100;
	if(month<=12)
	{
	p=Mcode(month);
	}
	else
	{
		printf("you enterd a unvalid month \n");
		return 0;
	}
	q=Ycode(c1);
	l=c2/4;
	if(day<=30)
	{
		total=(day+p+q+c2+l);
	}
	else
	{
		printf("you enter a unvalid  date \n");
		return 0;
	}
	d=total%7;
	printf("d=%d",d);
	Daycode(d);
	getch();
	return 0;
}
int Mcode(int mon)
{
	if(mon==1||mon==10)
	{
		return 1;
	}
	else if(mon==2||mon==3||mon==11)
	{
		return 4;
	}
	else if(mon==4||mon==7)
	{
		return 0;
	}
		else if(mon==9|mon==12)
	{
		return 6;
	}
		else if(mon==5)
	{
		return 2;
	}
		else if(month==6)
	{
		return 5;
	}
		else
	{
		return 3;
	}
}
int Ycode(int c1)
{
	if(c1%4==0)
	{
		return 6;
	}
	else if(c1%4==1)
	{
		return 4;
	}
	else if(c1%4==2)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
void Daycode(int d)
{
	if(d==0)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's SATURDay");
	}
	else if(d==1)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's SUNDay");
	}
		else if(d==2)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's MONDay");
	}
		else if(d==3)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's TWESDay");
	}
		else if(d==4)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's WEDNESSDay");
	}
		else if(d==5)
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's THEARSDay");
	}
		else
	{
		printf(" \n date :%d/%d/%d ",day,month,year);
		printf("\n It's FRIDay");
	}
}
