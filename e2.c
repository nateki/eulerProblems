#include<stdio.h>
main(){
	int i=1,j=2,k,sum=0,max;
	scanf("%d",&max);
	printf("%d\t",i);
	printf("%d\t",j);
	do{
		k=j+i;
		printf("%d\t",k);
		if(k%2 == 0){
			if(sum==0){
				sum=2;
			}
			sum+=k;
		}
		i=j;
		j=k;
	}while(i+j<max);
	printf("\nSum of the even-valued terms in the fibonacci sequence less than %d is %d\n",max,sum);
}

