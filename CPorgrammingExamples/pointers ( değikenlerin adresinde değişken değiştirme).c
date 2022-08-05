#include<stdio.h>
#include<stdlib.h>
void fonk(int *num1,int *num2,int *num3){
	int gecici;
	gecici=*num1;
	*num1=*num2;
	*num2=*num3;
	*num3=gecici;
}
int main(){
	int num1,num2,num3;
	printf("input the value of 1st element : ");
	scanf("%d",&num1);
	printf("input the value of 2nd element : ");
	scanf("%d",&num2);
	printf("input the value of 3rd element : ");
	scanf("%d",&num3);
	printf("The value before swapping are: \nelement 1 = %d\nelement 2 = %d\nelement 3 = %d",num1,num2,num3);
	printf("\n");
	fonk(&num1,&num2,&num3);
	printf("The value before swapping are: \nelement 1 = %d\nelement 2 = %d\nelement 3 = %d",num1,num2,num3);
	return 0;
}
