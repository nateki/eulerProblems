#include<stdio.h>
void main(){
int i =1,sum=0;
while (i<1000){
i++;
if(i%3 == 0 || i%5 == 0){
sum += i;
}
}
printf("Sum of all the natural numbers below one thousand that are multiples of 3 or 5 is %d\n",sum);
}
