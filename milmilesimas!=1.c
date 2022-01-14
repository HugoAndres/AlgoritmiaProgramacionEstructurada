//MIL MILESIMAS NO DAN 1
#include<stdio.h>

int main()
{
	int i;
	float r=0;
	for(i=1; i<=1000;i++)
		r=r+0.001;
	printf("%f\n",r);
}
