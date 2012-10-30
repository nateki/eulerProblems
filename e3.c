#include<stdio.h>
void main(){
//	int i =1,sum=reset=0;
	int j, max, ans=1, ansp=1, prime, i;
	printf("Enter a number\n");
	scanf("%d",&max);
		for(j=2;j<max;j++)
		{
			if(max%j == 0){
				ans = j;
				prime =0;
				for(i=2;i<j;i++){
					if(j%i == 0){
						prime = 1;
						break;
					}
				}
				if(prime != 1){
					ansp = ans;
				}
			}
		}
	printf("largest factor of %d is %d\n",max,ans);
	printf("largest prime factor of %d is %d\n",max,ansp);
}
