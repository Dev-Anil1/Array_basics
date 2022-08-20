#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,gr;
    printf("Enter 10 numbers ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    gr=a[0];
    for(i=1;i<=9;i++)
    {
        if(gr<a[i])
            gr=a[i];
    }
printf("greater no in array is %d",gr);
getch();
return 0;
}
