/******************************************************************************
    ed02_atv04_ponteiro
    
     Atividade: ED02 - Questao 4
     Pergunta: Os programas abaixo possuem erros. Qual(is)? Como deveriam ser?
    
     RESPOSTAS E CORRECOES:
     -- Letra A ---
     ERROS: 
     1. A linha 'p = x;' tenta atribuir um valor inteiro (100) diretamente ao 
     ponteiro 'p'. Ponteiros precisam receber enderecos de memoria, logo o correto 
     eh usar o operador '&' comercial: p = &x;
     2. O printf esta usando aspas tipograficas (“ ”), o que causa erro de sintaxe. 
     O correto eh usar aspas retas (" ").
     3. (Boa pratica) 'void main()' nao eh o padrao C; o ideal eh 'int main()'.
    
     --- Letra B ---
     ERRO: 
     O ponteiro '*temp' foi declarado, mas nao foi inicializado. Ele nao aponta para 
     lugar nenhum. Ao tentar fazer '*temp = *i;', o programa tenta escrever em um 
     espaco de memoria nao reservado, o que causa "Falha de Segmentacao" 
     (Segmentation Fault). A variavel 'temp' deveria ser apenas um inteiro normal 
     para guardar o valor temporariamente.
    
     --- Letra C ---
     ERROS:
     1. A expressao 'a < b' compara os enderecos de memoria em que as palavras foram 
     guardadas, e nao a ordem alfabetica delas. Para comparar o texto (strings) 
     em C, eh obrigatorio usar a funcao 'strcmp' da biblioteca <string.h>.
     2. As aspas tipograficas (“ ”) nas palavras e nos printfs tambem causam erro 
     de compilacao e devem ser substituidas pelas aspas retas (" ").

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// CORRECAO DA LETRA B: Funcao de troca arrumada
void troca(int *i, int *j) {
    int temp;      // Correcao: variavel normal (sem o *)
    temp = *i;     // Guarda o valor que esta no endereco de 'i'
    *i = *j;       // O endereco de 'i' recebe o valor que esta no endereco de 'j'
    *j = temp;     // O endereco de 'j' recebe o valor guardado em 'temp'
}

int main() {
    printf("===== CORRECOES DA QUESTAO 4 =====\n\n");

    // --- CORRECAO DA LETRA A ---
    printf("--- Letra A ---\n");
    int x, *p;
    x = 100;
    p = &x; // Correcao: adicionado o & para pegar o endereco
    printf("Valor de p: %d.\n\n", *p); // Correcao: aspas retas usadas


    // --- TESTE DA LETRA B ---
    printf("--- Letra B ---\n");
    int valor1 = 15, valor2 = 30;
    printf("Antes da troca: valor1 = %d | valor2 = %d\n", valor1, valor2);
    
    troca(&valor1, &valor2); // Chamando a funcao passando os enderecos
    
    printf("Depois da troca: valor1 = %d | valor2 = %d\n\n", valor1, valor2);


    // --- CORRECAO DA LETRA C ---
    printf("--- Letra C ---\n");
    char *a, *b;
    a = "abacate"; // Correcao: aspas retas
    b = "uva";     // Correcao: aspas retas
    
    // Correcao: strcmp compara as duas strings. 
    // Retorna < 0 se a primeira vier antes no alfabeto.
    if (strcmp(a, b) < 0) {
        printf("%s vem antes de %s no dicionario\n", a, b);
    } else {
        printf("%s vem depois de %s no dicionario\n", a, b);
    }

    return 0;
}