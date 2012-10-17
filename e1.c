#include<stdio.h>
void main(){
int i,sum = 0;
for (i=1;i<1000;i++)
{	
	if(i%3 == 0 || i%5 == 0)
	{
		sum += i;
		printf("%d\n",i);
	}

}
printf("end : Sum is %d\n",sum);
}
