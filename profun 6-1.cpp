#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void velocity()
{
	float v,s,t;
	printf("value s = ");
	scanf("%f",&s);
	printf("value t = ");
	scanf("%f",&t);
	float *p1=&s;
	float *p2=&t;
	float *p3=&v;
	*p3=(*p1 / *p2);
	printf("Velocity = %.3f",*p3);
	
}
void sss()
{
	float s,v,t;
	printf("value v = ");
	scanf("%f",&v);
	printf("value t = ");
	scanf("%f",&t);
	float *p1=&s;
	float *p2=&t;
	float *p3=&v;
	*p1 = (*p3 * *p2);
	if (*p1>0 && *p1 !=0)
	{
		printf("Distance  = %.3f",*p1);
	}
	else
	{
		printf("Distance cannot be negative");
	}
	
	}


	
void times()
	{
	float s,v,t;
	printf("value s = ");
	scanf("%f",&s);
	printf("value v = ");
	scanf("%f",&v);
	float *p1=&s;
	float *p2=&t;
	float *p3=&v;
	
	*p2 = (*p1 / *p3);
	
	if (*p2>0 && *p2!=0)
	{
		printf("Time = %.3f",*p2);
	}
	else
	{
		printf("Time cannot be negative");
	}
	
	}
int main()

{
	
	char f;
	char a[3] = {'v', 's','t'};
	printf("You looking find ? : ");
	scanf("%c",&f);
	
	if (f == a[0])
	{
		velocity();
	}
	else if (f == a[1])
	{
		sss();
	}
	else if (f == a[2])
	{
		times();
	}
	
	return 0;
}


