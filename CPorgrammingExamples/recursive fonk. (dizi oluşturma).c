#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int fonk(int first,int last,int step){
	if(first>=last){
		return last;
	}	
	else{
		printf("%4d",first);
		fonk(first+step,last,step);
	}
}
int main(){
	int first,last,step;
	printf("enter first number :");
	scanf("%d",&first);
	printf("enter last number :");
	scanf("%d",&last);
	printf("amount of increase :");
	scanf("%d",&step);
	
	fonk(first,last,step);
return 0;
}
