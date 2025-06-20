#include <stdio.h>
#include <conio.h>
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x,y,z;
    printf("Enter Two Numbers for Addition :");
    scanf("%d%d",&x,&y);
    z=add(x,y);
    printf("Addition of Two Numbers is:%d",z);
    getch();
}
