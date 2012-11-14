#include<stdio.h>
void main(){
<<<<<<< HEAD
int i =1,sum=0;
while (i<1000){
i++;
if(i%3 == 0 || i%5 == 0){
sum += i;
}
}
printf("Sum of all the natural numbers below one thousand that are multiples of 3 or 5 is %d\n",sum);
=======
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
>>>>>>> a490a95a4f6da5214f4fb3348c7d788f833fae95
}
