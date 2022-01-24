#include <stdio.h>
void aa(int [],int);
int main()
{
    int l=0;
    printf("Input the length of the array-\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d number of arrays continuously -\n",l);
    for(int i=0;i<l;i++)
    scanf("%d",&a[i]);
    aa(a,l);
    return 0;
}
void aa(int x[],int n)
{
    printf("New array - \n");
    for(int i=n/2;i<n;i++)
	{
		printf("%d\t", x[i]);
	}
	for(int i=0;i<n/2;i++)
	{
		printf("%d\t", x[i]);
	}
}
