#include <stdio.h>

int main(){

    int x[4], y[4];
    int i;

    printf("Digite 4 valores para o vetor x:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &x[i]);
    }

    printf("Digite 4 valores para o vetor y:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &y[i]);
    }

    printf("Somas dos elementos com seus indices correspondentes:\n");
    for(i = 0; i < 4; i++) {
        printf("%d\n", x[i]+y[i]);
    }

    return 0;
}
