#include<stdio.h>
void swap(int*, int*);
int main()
{
	int  n1,n2;
	printf("Input x :");
	scanf_s("%d", &n1);
	printf("Input y :");
	scanf_s("%d", &n2);
	swap(&n1,&n2);
	printf("swapping : x= %d , y= %d \n\n",n1,n2);
	return 0;
}
void swap(int*p,int*q) {
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}