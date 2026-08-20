#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

// o primeiro printf usa %c para usar caracteres especiais, o '\n' pula uma linha, o '\t' faz um recuo antes do texto, e o '\"' coloca as aspas duplas no texto literal //
// o segundo printf com %c so para colocar as aspas duplas no final da frase //
// e o system("PAUSE") para a tela do programa nao fechar sozinha //
