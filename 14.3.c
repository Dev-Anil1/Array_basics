#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,se=0,so=0;
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2)
            so+=a[i];
        else
            se+=a[i];
    }
    printf("sum of even is %d",se);
    printf("\nsum of odd is %d",so);
    getch();
    return 0;
}
