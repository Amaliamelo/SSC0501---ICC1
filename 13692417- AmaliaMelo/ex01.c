//Amália Vitória de Melo - 13692417
#include<stdio.h>

Passagem por valor: No caso onde a função swap recebe a passagem por valor, as variaveis a e b não
mudam na fun��o main, isto é seus valores continuam os mesmos antes e depois da função swap.
O que é passado para a função Swap é uma copia do valor das variaveis da função main.
Exemplo: INICIO - a=2 b=3
         FIM    - a=2 b=3

Passagem por referencia: No caso em que a função recebe a passagem por referencia, as variaveis a e b mudam
seus valores, pois o que é passado para a função é o endereço das variaveis e não uma copia do seu conteudo, sendo assim,
é possivel manipular os seus valores, trocando-os de lugar, e após a chamada da função swap na função main, há diferença na saida.
Exemplo: INICIO - a=2 b=3
         FIM    - a=3 b=2

