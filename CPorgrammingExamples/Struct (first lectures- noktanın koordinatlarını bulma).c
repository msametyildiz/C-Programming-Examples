FÝRST solution
---------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
struct nokta{
	float x_ekseni;
	float y_ekseni;
};
int main(){
	struct nokta a;
	a.x_ekseni=3;
	a.y_ekseni=5;
	printf("x= %f\ny= %f",a.x_ekseni,a.y_ekseni);
	return 0;
}
SECOND solution
---------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
typedef struct {
	float x_ekseni;
	float y_ekseni;
}nokta;
int main(){
	nokta a;
	a.x_ekseni=3;
	a.y_ekseni=5;
	printf("x= %.2f\ny= %.2f",a.x_ekseni,a.y_ekseni);
	return 0;
}
