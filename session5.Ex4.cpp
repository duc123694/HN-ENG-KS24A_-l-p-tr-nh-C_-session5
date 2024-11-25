#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap so tu 1-10 la ");
	scanf("%d",&a);
	if(a>=0&&a<=10){
		int i;
		for(i=1;i<=10;i++){
			printf(" %d x %d = %d \n",a,i,a*i);
		}
		
	}else{
		printf("Moi ban nhap so tu 1-10 la ");
	}
	return 0;
}
