#include<stdio.h>
int main(){
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	printf("Enter a11: ");
	scanf("%d", &a11);
	
	printf("Enter a12: ");
	scanf("%d", &a12);
	
	printf("Enter a13: ");
	scanf("%d", &a13);
	
	printf("Enter a21: ");
	scanf("%d", &a21);
	
	printf("Enter a22: ");
	scanf("%d", &a22);
	
	printf("Enter a23: ");
	scanf("%d", &a23);
	
	printf("Enter a31: ");
	scanf("%d", &a31);
	
	printf("Enter a32: ");
	scanf("%d", &a32);
	
	printf("Enter a33: ");
	scanf("%d", &a33);
	
	int D;
	D=(a11*a22*a33)-(a11*a32*a23)-(a21*a12*a33)+(a31*a12*a23)+(a21*a32*a13)-(a31*a22*a13);
	printf("The value of the diterminant D = %d", D);
	return 0;
}
