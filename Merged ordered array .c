#include <stdio.h>
int main(){
	int a[3]={1,3,5},b[3]={2,4,6},c[6],i,j,t;
	for(i=0;i<3;i++)
	c[i]=a[i];
	for(i=3;i<6;i++)
	c[i]=b[i-3];
	for(i=0;i<6;i++)
	for(j=0;j<5-i;j++)
{
if(c[j]>c[j+1])
{t=c[j];
c[j]=c[j+1];
c[j+1]=t;
}
}
for(i=0;i<6;i++)
printf("%d ",c[i]);
	
	return 0;
}
