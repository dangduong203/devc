#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<1 ||  n>100)
		printf("moi ban nhap lai \n");
	}while(n<1 || n>100);

}
