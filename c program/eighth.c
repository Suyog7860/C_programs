#include <stdio.h>
#include <conio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("Addition of Two Numbers is : %d",c);
}
int main()
{
    int x,y;
    printf("Enter 2 Numbers for Addition :\n");
    scanf("%d%d",&x,&y);
    add(x,y);
    getch();
}
