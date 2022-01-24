#include <stdio.h>
#include <stdlib.h>
void sum(int [][m],int [][m],int m);
void sub(int [][m],int [][m],int m);
void mul(int [][m],int [][m],int m);
int main()
{
    int t=0,m=0;
    printf("Input the length of both the array-\n");
    scanf("%d",&m);
    int a[m][m],b[m][m];
    printf("Input %d*%d number for the 1st array continuously -\n",m,m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input %d*%d number for the 2nd array continuously -\n",m,m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("ENTER 1 IF YOU WANT TO PERFORM ADDITION OF THE 2 MATRIX\nENTER 2 IF YOU WANT TO PERFORM SUBSTRACTION OF THE 2 MATRIX\nENTER 3 IF YOU WANT TO PERFORM MULTIPLICATION OF THE 2 MATRIX\n");
    scanf("%d",&t);
    switch(t)
    {
        case 1:
        sum(a,b,m);
        break;
        case 2:
        sub(a,b,m);
        break;
        case 3:
        mul(a,b,m);
        break;
        default:
        printf("\nWRONG INPUT !!!");
    }
    return 0;
}
void sum(int a[][m],int b[][m],int m)
{
    int c[m][m];
    printf("Sum of 2-d array -\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void sub(int a[][m],int b[][m])
{
    int c[m][m];
    printf("Difference of 2-d array -\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void mul(int a[][m],int b[][m],int m)
{
    int c[m][m];
    printf("Multiplication of 2-d array -\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
