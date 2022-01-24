#include <stdio.h>
int main()
{
    int s=0;
    int a[10];
    double b[10];
    printf("Input 10 temperature in farenheit=\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=((a[i]-32)*5)/9;
    }
    printf("Temperature in celcius is \n");
    for(int i=0;i<10;i++)
    {
        printf("%0.2lf\t",b[i]);
    }
    return 0;
}
