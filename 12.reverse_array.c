#include <stdio.h>

int main() {
	int a[] = {5,10,20,30,40,50,60,70,80,90};
	for (int i = 0; i < 10; i++)
		printf("%d ",a[i]);
	printf("\n");
	int n = sizeof(a)/sizeof(a[0]);
	int t = 0, i;
	for (i = 0; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[10-i-1];
		a[10-i-1] = t;
	}
	for (int i = 0; i < 10; i++)
		printf("%d ",a[i]);
	return 0;
}
