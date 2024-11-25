#include<stdio.h>
int main(){
	int n, sumNumber=0;
	printf("Moi ban nhap so ");
	scanf("%d",&n);
	if(n>0){
		int i;
		for(i=1;i<=n;i++){
			sumNumber+=i;
		}
		printf("tong cua so nguyen duong tu 1 den %d la %d",n,sumNumber);
	}else{
		printf("Moi ban nhap lai so nguyen duong: ");
	}
	return 0;
}
