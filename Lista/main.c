//lista encadeada
#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x, y;
    struct ponto * proximo;
} t_ponto;


int main(){
    t_ponto * ini_ponto;
    t_ponto * proximo_ponto;
    int resp;
    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL)
        exit(1);
    proximo_ponto = ini_ponto;

    while (1){
        printf("Digite o valor de x: ");
        scanf("%d", &proximo_ponto ->x);
        printf("Digite o valor de y: ");
        scanf("%d", &proximo_ponto ->y);
        printf("Deseja continuar? <1>SIM <Outro valor>NAO: ");
        scanf("%d", &resp);
        if (resp == 1) {
            proximo_ponto ->proximo = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto ->proximo;
        } else
            break;
    }
        proximo_ponto ->proximo = NULL;
        proximo_ponto = ini_ponto;
        while (proximo_ponto != NULL) {
            printf("x: %d, y: %d\n", proximo_ponto->x, proximo_ponto->y);
            proximo_ponto = proximo_ponto ->proximo;
        }

        
    return 0;
}