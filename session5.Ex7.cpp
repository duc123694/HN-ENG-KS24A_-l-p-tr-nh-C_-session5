#include <stdio.h>
int main(){
	int a,b,temporary,number1,number2;
	printf("Moi ban nhap so: ");
	scanf("%d",&a);
	printf("Moi ban nhap so: ");
	scanf("%d",&b);
	number1=a;
	number2=b;
	while(b!=0){
		temporary=b;
		b=a%b;
		a=temporary;
	}
	printf("Uoc chung lon nhat cua %d va %d la %d",number1,number2,a);
	return 0;
}




