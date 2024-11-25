#include<stdio.h>
int main(){
	int a=10;
	int i;
	while(a>1){
		--a;
		for(i=1;i<=10;i++){
		printf(" %d x %d = %d \n",a,i,a*i);
	}printf("\n");
	}
	
	return 0;
}
