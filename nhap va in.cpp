#include<stdio.h>
#include<conio.h>
void nhapmang(int a[100], int n){
	for(int i=0; i<n;i++)
	{printf("a[%d]=", i);
	scanf("%d", &a[i]);
	}
	}
void inmang(int a[50], int n){
	for(int i=0; i<n; i++)
	{printf("a[%d]=%d", i, a[i]);
	}
}
int main(){
	int n;
	int a[50];
	printf("nhap n");
	scanf("%d", &n);
	nhapmang(a,n);
	inmang(a,n);
}
