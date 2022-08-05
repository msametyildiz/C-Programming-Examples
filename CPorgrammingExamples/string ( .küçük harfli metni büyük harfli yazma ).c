//												string ( küçük harfli metni büyük harfli yazma )
#include<stdio.h>
#define N 3
int fonk(int matrix[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j&&matrix[i][j]!=1){
				return 0;
			}
			else if(i!=j&&matrix[i][j]!=0){
				return 0;
			}
		}
	}
}
int main(){
	int matris[N][N]={{1,0,0},{0,1,0},{0,0,1}};
	int result;
	result=fonk(matris);
	if(result!=0){
		printf("idently matrix");
	}
	else{
		printf("not idently matrix");
	}
	return 0;
}
