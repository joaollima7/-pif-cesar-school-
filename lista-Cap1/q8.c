#include <stdio.h>
#include <stdlib.h>

int main(){
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}

// \n move o cursor para a próxima linha // 
// \t move o cursor para a próxima tabulação (espaço de recuo) //
// \" permite as de aspas duplas sem fechar a string C //
// \" imprime as aspas duplas de fechamento depois da palavra "programa" //

// Comportamento do systemPAUSE: //
// pausa a execução no console  e exibe a mensagem "pressione qualquer tecla para continuar" //
// como não tem um '\n' no final do printf, a mensagem do system ("PAUSE") vai sair na mesma linha do printf //    

// Comportamento do return 0: //
// retorna o valor 0 pra indicar que o programa finalizou //
