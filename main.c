#include <stdio.h>
#include <stdlib.h>

int main()
{
 int ligne,i,j;
    printf("Entrez le nombre des lignes :");
    scanf("%d",&ligne);
    for(i=1;i<=ligne;i++){
        for(j=1;j<=i;j++){
            printf(" * ");
    }
    printf("\n");
    }
    return 0;
}
