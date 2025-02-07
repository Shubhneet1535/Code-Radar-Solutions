#include <stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i>0;i++)
    {
        for(j=rows;j>0;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}