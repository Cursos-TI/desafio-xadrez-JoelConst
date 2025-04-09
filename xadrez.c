int i, j; // Variáveis auxiliares para os loops

// Movimento da Torre: 5 casas para a Direita
printf("Movimento da Torre:\n");

// Estrutura de repetição for
for(i = 1; i <= casasTorre; i++) {
    printf("Direita\n");
}

printf("\n");

// Movimento do Bispo: 5 casas na Diagonal (Cima e Direita)
printf("Movimento do Bispo:\n");

i = 1; // Reinicializa i

// Estrutura de repetição while
while(i <= casasBispo) {
    printf("Cima Direita\n");
    i++;
}

printf("\n");

// Movimento da Rainha: 8 casas para a Esquerda
printf("Movimento da Rainha:\n");

i = 1; // Reinicializa i

// Estrutura de repetição do-while
do {
    printf("Esquerda\n");
    i++;
} while(i <= casasRainha);

printf("\n");

// Movimento do Cavalo: 2 casas para Baixo e 1 para Esquerda
printf("Movimento do Cavalo:\n");

// Loop externo for (para cada movimento do cavalo)
for(i = 1; i <= casasBaixoCavalo; i++) {
    printf("Baixo\n");
}

// Loop interno while (movimento perpendicular para Esquerda)
j = 1;
while(j <= casasEsquerdaCavalo) {
    printf("Esquerda\n");
    j++;
}

printf("\n");

return 0;
