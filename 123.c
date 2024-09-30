#include <stdio.h>

void  clock(int sum);
int main() 
{
   int a,b,c,d;
   scanf("%d  %d",&a,&b);
   c=a/100;
   d=a-c*100;
   int sum;
   
   sum=c*60+d+b;
   if(sum>720){
      while (sum>720){
         sum=sum-720;
      }
      clock(sum);
      
   }else if(sum<0){
      while (sum<0){
         sum=sum+720;
      }
      clock(sum);
   }else if(sum==0){
      printf("000 ");
   }else {
   	   clock(sum);
   }
   
    return 0;
}


void  clock(int sum){
	int c,d;
	c=sum/60;
    d=sum%60;
    if(c==0){
        if(d<10){
         printf("00%d\n",d);
        } else {
          printf("0%d\n",d);
        }
    }else{
      printf("%d ",c*100+d);
    }
    return 	 ;

} 


	
	

	