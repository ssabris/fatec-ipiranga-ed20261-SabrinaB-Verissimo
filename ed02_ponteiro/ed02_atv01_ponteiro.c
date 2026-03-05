/******************************************************************************
ed02_atv01_ponteiro

Qual o valor de y no final do programa?
O valor final de y sera 4.

passo a passo:
1. y = 0;      -> y inicia com valor 0
2. p = &y;     -> O ponteiro 'p' guarda o endereco de 'y'
3. x = *p;     -> 'x' recebe o valor apontado por 'p' (x = 0)
4. x = 4;      -> 'x' passa a valer 4 (isso nao altera y)
5. ++(*p);     -> Incrementa o valor apontado por 'p'. 'y' passa a ser 1
6. x--;        -> Decrementa 'x'. 'x' passa a ser 3
7. (*p) += x++;-> Soma o valor atual de 'x' (3) ao valor de 'y' (1). 'y' vira 4 
                  O 'x' e incrementado para 4 logo depois, mas nao afeta 'y'
*******************************************************************************/
#include <stdio.h>

int main() {
    int y, *p, x;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    ++(*p);
    x--;        // Corrigido: dois sinais de menos
    (*p) += x++;

    printf("y = %d\n", y); // Corrigido: aspas retas
    
    return 0;
} // Corrigido: fechamento da função