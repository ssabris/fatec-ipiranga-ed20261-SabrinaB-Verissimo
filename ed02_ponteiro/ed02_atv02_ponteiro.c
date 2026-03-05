/******************************************************************************
ed02_atv02_ponteiro

2. Diferenças entre incrementos de ponteiros

a) Diferença entre p++, (*p)++ e *(++p):

    p++: Incrementa o endereço de memória que o ponteiro guarda. 
    Se ele apontava para a posição 1000 e é um ponteiro de int (4 bytes), 
    ele passará a apontar para a posição 1004. 
    Ele avança para a próxima "casa" na memória.
    
    (*p)++: Incrementa o valor da variável para a qual o ponteiro está apontando. 
    O endereço do ponteiro não muda, mas a variável original ganha +1.
    
    *(++p): Primeiro, incrementa o endereço do ponteiro (como no primeiro caso).
    Depois, acessa (desreferencia) o valor que está nesse novo endereço.

b) O que quer dizer *(p+10)?

    Significa acessar o valor que está armazenado 10 posições à frente do endereço atual de p. 
    O ponteiro p em si não é modificado, o programa apenas "olha" 10 casas para frente 
    (é exatamente a mesma coisa que fazer p[10] em um array).

*******************************************************************************/

