#include <stdio.h> 
#include <conio.h>
void nhapmang(int a[][10],int x)
	{
	for(int i=0;i<x;i++)
		for(int j=0;j<x;j++)
		{
		printf("\nNhap a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
void xuatmang(int a[][10],int x)
	{
	for(int i=0;i<x;i++)
		{
		for(int j=0;j<x;j++)
		{
		printf("%d",a[i][j]);
		printf("  ");
		}
		printf("\n");
		}
	}
void dem_top_dcc(int a[][10],int x)
	{
	int count=0;
	for(int i=0;i<x;i++)
		
		for(int j=0;j<x;j++)
			if ((i<j)&&(a[i][j]%2!=0)) count=count +1;
	printf("\nSo phan tu le nam phia tren duong cheo chinh :");
	printf("%d",count);
	}
void chanle2so(int a[][10],int x)
	{
	for(int i=0;i<x;i++)
		
		for(int j=0;j<x;j++)
			if ((i%2==0)&&(j%2!=0)&&(a[i][j]>=10)&&(a[i][j]<=99)) 
					printf("\n%d",a[i][j]);
	}

int main()
{
	int b[10][10];
	int n;
	do
		{
		printf("\nNhap n cho ma tran vuong nXn (3<= n <=10): ");
		scanf("%d",&n);
		}
	while((n<3)||(n>10));	
	nhapmang(b,n);
	printf("\nMa tran vuong vua nhap :\n");
	xuatmang(b,n);
	
	dem_top_dcc(b,n);
	printf("\n Cac phan tu co 2 chu so nam o dong chan cot le la:");
	chanle2so(b,n);
	
	return 0;
}

