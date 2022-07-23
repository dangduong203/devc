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
    int tong=0;
    for(int i=1;i<n;i++){
        if(i%3==0){
            tong=tong+i;
        }
    }
    printf("\nTong cac so chia het cho 3 la: ""%d",tong);
    int tong1=0;
   	for(int i=1;i<=n;i++)
   	{
   		if(i%2==0 || i%5==0)
   		tong1=tong1+i;
	   }

}
