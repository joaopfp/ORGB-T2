# T2 de ORGB

Propostas de Algoritmos:
* QuickSort (com array de 1k e 10k)
   * Boa Localidade Temporal porque acessa repetidamente valores adjacentes na lista durante a fase de particionamento. 
   * Má Localidade Espacial porque não acessa os elementos da lista sequencialmente. Processa as sublistas de forma separada. 
   * Possui muitas dependências que atrapalham a exploração do paralelismo no nível de instrução. Isso acontece porque as sublistas precisam ser processadas em uma ordem específica pra garantir o ordernamento correto. Mais especificamente, a partição de cada sublista depende do valor do pivô que é calculado baseado nos valores originais da lista não ordenada.
* [Floyd-Warshall](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm) (É um algoritmo bem simples que calcula a distância mais curta entre todos os caminhos de um grafo com pesos, esse grafo é gerado randomicamente em tempo de execução)
  * Boa localidade temporal devido ao acesso frequente de dados durante o laço. 
  * Má localidade espacial devido ao acesso ao array de duas dimensões de forma não contígua. 
  * Possui muito paralelismo em nível de instrução: A cada iteração, a distância entre dois vértices depende somente de seus vértices intermediários, na prática, a computação de diferentes pares de vértices pode ser calculada de forma independente. 


