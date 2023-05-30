#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Entrer un nombre : \n");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n",i,n,i*n);
    }
    return 0;
}
