# Arvores Binárias

Árvore binária é uma estrutura de dados caracterizada por:

- Ou não tem elemento algum (árvore vazia).
- Ou tem um elemento distinto, denominado raiz, com dois apontamentos para duas estruturas diferentes, denominadas sub-árvore esquerda e sub-árvore direita
- Uma arvore é sequencialmente, uma estrutura não sequencial
- Uma arvore binária pode ter duas subarvores vazias
- Toda arvore binária com n nós possui exatamente n+1 subárvores vazias entre suas subarvores esquerda e direita
- Cada nó da arvore deve conter um ponteiro para os seus filhos (Direito e esquerdo)


Vale ressaltar que o armazenamento de arvore pode utilizar tanto alocação sequencial quanto encadeada, isso vai depender do problema a ser resolvido.

##### Percurso arvore binária
Existem 3 tipos de percursos para uma arvore binária (explicados abaixo). Vale ressaltar que a complexidade considerando o procedimento de visita de complexidade constante, é **O(n)**

###### Pré Ordem
Segue recursivamente os seguintes passos, para cada subárvore:
- Visitar Raiz;
- Percorrer sua subarvore esquerda, em Pré-ordem;
- Percorrer sua subárvore direita, em pré-ordem
 
[![N|Solid](https://slideplayer.com.br/slide/3443920/11/images/13/Tipos+de+percurso+%E2%80%93+Pr%C3%A9+ordem.jpg)]()

###### Ordem Simétrica

- Percorrer sua subarvore esquerda, em ordem simétrica;
- Visitar Raiz;
- Percorrer sua subarvore direita, em ordem simétrica;

###### Pós ordem
Segue recursivamente os seguintes passos, para cada subárvore:

- Percorrer sua subarvore esquerda, em Pos-ordem;
- Percorrer sua subárvore direita, em pos-ordem
- Visitar Raiz; 
