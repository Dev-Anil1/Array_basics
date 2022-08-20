#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 values");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum+=a[i];
    printf("sum is %d",sum);
    getch();
    return 0;
}
