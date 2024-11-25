#include<stdio.h>
int main(){
	float a,b,resuilt;
	int number;
	printf("Moi ban nhap hai so nguyen ");
	scanf("%f %f",&a,&b);
	printf("CALCULATOR \n");
	printf("1.Tong 2 so \n");
	printf("2.Hieu 2 so \n");
	printf("3.Tich 2 so \n");
	printf("4.Thuong 2 so \n");
	printf("5.thoat \n");
	while(1){
		scanf("%d",&number);
		if(number==1){
			resuilt=a+b;
			printf("%.0f \n",resuilt);
		}
			if(number==2){
			resuilt=a-b;
			printf("%.0f \n",resuilt);
		}
			if(number==3){
			resuilt=a*b;
			printf("%.0f \n",resuilt);
		}
			if(number==4){
			resuilt=a/b;
			printf("%.2f \n",resuilt);
		}
			if(number==5){
				break;
		}
	}
	return 0;
}
