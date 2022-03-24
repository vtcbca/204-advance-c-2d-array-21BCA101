/* write a menu driven program to perform following operation using UDF.
1. Sum Of Digits
2. Pelindrom
3. Armstrong
4. Square Series
5. Exit.
Author : Smit Lad
Date : 22-03-2022 */

#include<stdio.h>
#include<conio.h>

int Menu();
void sod();
void pel(int);
int arm();
void sqs(int);

void main()
{
	int a,b,c,d;
	char inp;
	clrscr();
	do
	{
		c = Menu();
		switch(c)
		{
			case 1:
				sod();
				break;
			case 2:
				clrscr();
				printf("\n\t\t Pelindrome Number ");
				printf("\n\n\t Enter A Number : ");
				scanf("%d",&a);
				pel(a);
				break;
			case 3:
				b = arm();
				if(b==1)
					printf("\n\t It Is Armstrong");
				else
					printf("\n\t It Is Not Armstrong");
				getch();
				break;
			case 4:
				clrscr();
				printf("\n\t Square Series");
				printf("\n\n\t\t Enter A Number : ");
				scanf("%d",&d);
				sqs(d);
				break;
			case 5:
				exit(0);
			default:
				printf("Enter Valid Choice : ");
		}
		flushall();
		clrscr();
		printf("\n Do You Want To Continue ? \n\t ( YES = Y Or y ) : ");
		scanf("%c",&inp);
		clrscr();
	}
	while(inp == 'Y' || inp == 'y');
}

int Menu()
{
	int c;
	printf("\n\t\t  MENU  \n");
	printf("\n------------------------------------------");
	printf("\n \t 1 : Sum Of Digits ");
	printf("\n \t 2 : Pelindrome ");
	printf("\n \t 3 : Armstrong ");
	printf("\n \t 4 : Square Series ");
	printf("\n \t 5 : Exit   ");
	printf("\n------------------------------------------");
	printf("\n\t Enter Your Choice : ");
	scanf("%d",&c);
	return c;
}

//Sum Of Digits

void sod()
{
	int n,m,sum=0,r;
	clrscr();
	printf("\n\t\t Sum Of Digits ");
	printf("\n\t Enter A Value : ");
	scanf("%d",&n);
	m = n;
	while(n>0)
	{
		r = n%10;
		sum = sum + r;
		n = n/10;
	}
	printf("\n\n\t The Sum Of %d Is %d",m,sum);
	getch();
}

void pel(int x)
{
	int a,sum=0,r;
	a = x;
	while(x>0)
	{
		r = x%10;
		sum = (sum * 10) + r;
		x = x/10;
	}
	if(sum == a)
		printf("\n\t It Is Pelindrome");
	else
		printf("\n\t It Is Not Pelindrome");
	getch();
}

int arm()
{
	int a,b,sum=0,r;
	clrscr();
	printf("\n\t\t Armstrong Number ");
	printf("\n\n\t Enter A Number : ");
	scanf("%d",&a);
	b = a;
	while(a>0)
	{
		r = a%10;
		sum = sum + (r*r*r);
		a = a/10;
	}
	if(b == sum)
		b=1;
	else
		b=0;
	return b;
}

void sqs(int x)
{
	int i,y,sum=0;
	clrscr();
	printf("\t Series Of %d Numbers Is : \n\n\t\t\t Series = ",x);
	for(i=1;i<=x;i++)
	{
		sum = i * i;
		printf(", %d",sum);
	}
	getch();
}