#include<stdio.h>
int main(){
	int ans,started,ii,last,il,i,i1,i2,j,k,l,ten,tenl;
	float front;
ans=1;
	for(i1=1000;i1>0;i1--)
	{
		for(i2=1000;i2>0;i2--)
		{
		i=i1*i2;
		//	i=1493941;
		printf("No %d\n",i);
		ten=100000000.0;
		tenl=1.0;
		il=ii=i;
		started=0;
		for(j=1;j++;j<8){
			if(ten>10 && ii>10){
			ten=ten/10.0;
			front=ii/ten;
			if((front>0 || started==1) && (il>10)){
				started=1;
				ii=ii%ten;
				//tenl=tenl*10.0;
				last=il%10;
				il=il/10;		
					printf("continue i %d ten %d front %f last %d ii %d il %d\n",i,ten,front,last,ii,il);
				if(front == last){
					if(ten/10.0==tenl){
						if(i>ans){
							ans=i;
						}
						printf("ha ha %d",i);
					}
					printf("continue i %d ten %d front %f last %d ii %d il %d\n",i,ten,front,last,ii,il);
				//	continue;
				}else{
					printf("break %d\n",i);
					break;
				}
			}
}
		}
	}
	}
printf("\n%d\n",ans);
}

