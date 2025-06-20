#include <stdio.h>
#include <conio.h>
void add()
{
    int a,b,c;
    printf("Enter 2 Numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition is : %d\n",c);
}
void main()
{
    add();
    getch();
}
