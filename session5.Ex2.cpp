#include<stdio.h>
int main(){
	int target=50;
	int number;
	do{
		printf("Moi ban nhap so: ",number);
		scanf("%d",&number);
	}while(number!=target);
	printf("Ban da nhap dung \n",target);
	return 0;
}
