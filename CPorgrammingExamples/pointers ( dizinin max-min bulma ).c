//     pointers ( dizinin max/min bulma )

#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10],max,min,i,*cont;
	
	for(cont=arr;cont<arr+10;cont++){
		printf("%d enter : ",i+1);
		i++;
		scanf("%d",cont);
	}
	max=min=arr[0];
	for(cont=arr;cont<arr+10;cont++){
		if(*cont>max){
			max=*cont;
		}
		else if(*cont<min){
			min=*cont;
		}
	}
	printf("max= %d\nmin= %d",max,min);
	return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10],max,min,i,*cont;
	
	for(i=0;i<10;i++){
		printf("%d enter : ",i+1);
		scanf("%d",&arr[i]);
	}
	cont=arr;
	max=*cont;
	min=*cont
;
	for(i=0;i<10;i++){
		if(*(cont+i)>max){
			max=*(cont+i);
		}
		else if(*(cont+i)<min){
			min=*(cont+i);
		}
	}
	printf("max= %d\nmin= %d",max,min);
	return 0;
}
