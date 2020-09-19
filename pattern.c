#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j;
    printf(" enter the number");
    scanf("%d",&num);
    for(i=num;i>1;i--)
    {
        for(j=num;j>i;j--)
         printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
            printf("%d ",i);
            for(j=i+1;j<=num;j++)
                printf("%d ",j);
       printf("\n");

    }
    for(i=1;i<=num;i++)
    {
        for(j=num;j>i;j--)
         printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
            printf("%d ",i);
            for(j=i+1;j<=num;j++)
                printf("%d ",j);

       printf("\n");

    }
}
