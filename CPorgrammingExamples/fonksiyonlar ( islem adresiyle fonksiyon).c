//												fonksiyonlar ( islem adresiyle fonksiyon)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int square(int *number){
	return int(pow(*number,2));
}
int main(){
	int n,result;
	printf("enter number : ");
	scanf("%d",&n);
	result=square(&n);
	printf("result = %d",result);
	return 0;
}
