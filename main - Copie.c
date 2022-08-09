#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligne,i,j;
    printf("Entrez le nombre des lignes :");
    scanf("%d",&ligne);
    for(i=1;i<=6;i++){
        for(j=ligne-i;j>=1;j--)
            printf("  ");

        for(j=1;j<=i+i-1;j++)
             printf(" *");
    printf("\n");
    }

}
