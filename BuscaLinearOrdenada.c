#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int BuscaLinearOrdenada (int *v, int size, int value) {
	int i;
    for(i = 0; i < size; i++){
    		if(v[i] > value) {
    			printf("Valor nao encontrado, Comparacoes: %d\n", i);
    			return 0;
    		}
		if(v[i] == value) {
            		printf("Valor encontrado na posiçao: %d Comparacoes: %d\n", i, i+1);
            		return 1;
		}
	}
	printf("Valor nao encontrado, Comparacoes: %d\n", i);
	return 0;
}


int main () {
	
	clock_t t;
	t = clock();
	int i = 0;
	int v[1000000];
	
	while(scanf("%d", &v[i]) != EOF)i++;

	BuscaLinearOrdenada(v, i, 998998109);
	
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Tempo de execucao: %f segundos para executar.\n", time_taken);
	
}
