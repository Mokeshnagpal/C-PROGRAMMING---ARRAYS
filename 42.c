#include <stdio.h>
#include <string.h>
struct student
{
    long pno;
    char name[20];
    long points;
};
int main()
{
    int l=0;
    long t=0;
    char n[20];
    printf("Input the number of students taking part in the sports -\n");
    scanf("%d",&l);
    struct student s[l];
    for(int i=0;i<l;i++)
    {
        printf("Input name of student %d\n",i+1);
        fflush(stdin);
        scanf("%[^\n]",s[i].name);
        fflush(stdin);
        printf("Input %s's number -\n",s[i].name);
        scanf("%ld",&s[i].pno);
        printf("Input %s's point scored -\n",s[i].name);
        scanf("%ld",&s[i].points);
    }
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(s[i].points<s[i+1].points)
            {
                t=s[i].points;
                s[i].points=s[i+1].points;
                s[i+1].points=t;
                strcpy(n,s[i].name);
                strcpy(s[i].name,s[i+1].name);
                strcpy(s[i+1].name,n);
                t=s[i].pno;
                s[i].pno=s[i+1].pno;
                s[i+1].pno=t;
            }
        }
    }
    printf("\nName\tP.Number\tP.Score\n");
    for(int i=0;i<l;i++)
    {
        printf("%s\t%ld\t%ld\n",s[i].name,s[i].pno,s[i].points);
    }
    return 0;
}



