#include<stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	while(n<=1 ||  n>=100){
		printf("moi ban nhap lai");
		printf("%d",&n);
	}
	printf("Day so le tu 1 den %d la: ",n);
	for(int i=1;i<=n;i++)
	{int a=i%2;
	if (a!=0)
	printf("%d ",i);


}
