#include<stdio.h>
#include<conio.h>
int main(){
	int tieuthu, cu, moi;
	double sotien;
	printf("nhap so dien tt moi");
	scanf("%d", &moi);
	printf("nhap so dien tt cu");
	scanf("%d", &cu);
	tieuthu=moi-cu;
	if(tieuthu<50)
	{ sotien=tieuthu*1500;
	printf("so tien la %f\n", sotien);
	}
	else
	{if(tieuthu>100)
	{sotien= 49*1500+51*2000+3000*(tieuthu-100);
	printf("so tien la %f\n", sotien);
	}
	else{
	sotien= 49*1500+(tieuthu-49)*2000;
	printf("so tien la %f", sotien);
	}}}
