a) A saída exata será:
a = 0, b = 5, c = 8

O incremento ++b foi ignorado porque a vale 0, fazendo a primeira parte da condição (a != 0) ser falsa. Por causa do curto-circuito do &&, o C não avalia a segunda parte. Com isso, o fluxo foi para o else, resultando em c = 8.

b) No operador E (&&), se o primeiro operando for falso, o segundo é ignorado. No operador OU (||), se o primeiro for verdadeiro, o segundo é ignorado.

c) O valor final seria b = 5 e c = 20. Como a == 0 é verdadeiro, o curto-circuito do OU encerra a avaliação ali e o incremento ++b também não é executado.
