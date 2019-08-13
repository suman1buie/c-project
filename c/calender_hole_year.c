#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Ycode(int);
int Mcode(int);
void Daycode(int);
void printmonth(int m);
int month(int m,int y);
int key(int m,int y);
void redy(int yr,int m2);
int main()
{
	int year,manth;
	system("color 4f");
	printf("enter the year \n");
	scanf("%d",&year);
	for(manth=1;manth<=12;manth++)
	{
	redy(year,manth);
	}
	getch();
	return 0;
}
void redy(int yr,int m2)
{
	int m1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	int year,m,k,p,s=0,c,z,y,r=1;
	year=yr;
	m=m2;
	char d[]={'s','S','M','T','W','t','F'};
	printf("                  -------YEAR-------                 \n");
	printf("                  -------%d-------                 \n",year);
	printf("****************************************************\n");
	printmonth(m);
	printf("----------------------------------------------------\n");
	for(k=0;k<7;k++)
	{
		printf("   %c	",d[k]);
	}
	p=month(m,year);
	c=key(m,year);
	printf("\n");
	z=1;
	y=c;
	for(z=0;z<p;z++)
	{
		while(y)
		{
			if(r)
			{
				printf("\n");
				r=0;
			}
			y=y-1;
			printf("	",y);
			s++;
		}
		s++;
		if(c==p)
		c=0;
		printf("  %d	 ",m1[z]);
		if(s%7==0)
		{
			printf("\n\n");
		}
	}
	printf("\n\n\n");
}
int month(int m,int y)
{
	int day;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		day=31; 
	}
	else if(m==2)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			day=29;
		}
		else
		day=28;
	}
	else
	{
		day=30;
	}
	return (day);
}
void printmonth(int m)
{
	if(m==1)
	{
		printf("----------------------:JANUARY:-------------------- \n");
	}
	if(m==2)
	{
		printf("----------------------:FEBRUARY:-------------------- \n");
	}
	if(m==3)
	{
		printf("----------------------:MARCH:-------------------- \n");
	}
	if(m==4)
	{
		printf("----------------------:APRIL:-------------------- \n");
	}
	if(m==5)
	{
		printf("----------------------:MAY:-------------------- \n");
	}
	if(m==6)
	{
		printf("----------------------:JUNE:-------------------- \n");
	}
	if(m==7)
	{
		printf("----------------------:JULLY:-------------------- \n");
	}
	if(m==8)
	{
		printf("----------------------:AUGUST:-------------------- \n");
	}
	if(m==9)
	{
		printf("----------------------:SEPTEMBER:-------------------- \n");
	}
	if(m==10)
	{
		printf("----------------------:OCTOBER:-------------------- \n");
	}
	if(m==11)
	{
		printf("----------------------:NOVEMBER:-------------------- \n");
	}
	if(m==12)
	{
		printf("----------------------:DECEMBER:-------------------- \n");
	}
	
}
int key(int m,int y)
{
	int c1,c2,p,q,total,l,d;
	int day,month,year;
	day=1;
	month=m;
	year=y;	
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
	total=(day+p+q+c2+l);
	d=total%7;
	return (d);
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
		else if(mon==9||mon==12)
	{
		return 6;
	}
		else if(mon==5)
	{
		return 2;
	}
		else if(mon==6)
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
