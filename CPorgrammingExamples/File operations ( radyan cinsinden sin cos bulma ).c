#include<stdio.h>
#include<math.h>
int main(){
	FILE *dosya;
	float deger,deger2;
	if((dosya=fopen("deneme3.txt","w"))!=NULL){
		for(int i=1;i<=360;i++){
			deger=cos(i);
			deger2=sin(i);
			fprintf(dosya,"%d ---> cos: %.2f\tsin: %.2f\n",i,deger,deger2);
		}
		printf("degerler yazdirildi.");
	}
	else{
		printf("basarisiz...");
	}
	fclose(dosya);
	return 0;
}
