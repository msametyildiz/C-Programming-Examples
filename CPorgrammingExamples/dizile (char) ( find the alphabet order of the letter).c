//                                            char dizisi ( bir harf alfabedeki sirasi)
FÝRST RESULT 
#include<stdio.h>
int main(){
	int result,chr;
	printf("lutfen bir harf giriniz: ");
	scanf("%c",&chr);
	if(chr>='a'&&chr<='z'){
		result=(int)chr-(int)'a'+1;
	}	
	printf(" %c alfabede %d.siradadir.",chr,result);
	return 0;
}

SECOND RESULT
#include<stdio.h>
int main(){
	int c;
	printf("enter letter: ");
	c=getchar();
	printf("the letter is in the %d. order of the alphabet ",(c-'a')+1);
	return 0;
}
