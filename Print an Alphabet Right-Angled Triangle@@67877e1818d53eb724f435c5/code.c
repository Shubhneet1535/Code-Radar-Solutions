#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=A;i<=N;i++){
        for(int j=A;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}