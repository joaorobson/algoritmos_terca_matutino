#include <stdio.h>

int main() {
	int entrada;

	while (scanf("%d", &entrada) != EOF) {
		int m[entrada][entrada];
		int pos = entrada / 3;

		for (int linha = 0; linha < entrada; linha++) {
			for (int coluna = 0; coluna < entrada; coluna++) {
					if (linha == coluna && (linha < pos || linha > entrada - pos - 1)) {
							printf("2");
					} else if (linha + coluna == entrada - 1 && (linha < pos || linha > entrada - pos - 1)) {
							printf("3");
					} else if (linha >= pos && linha <= entrada - pos - 1 && coluna >= pos && coluna <= entrada - pos - 1) {
							if (linha == entrada / 2 && coluna == entrada / 2) {
									printf("4");
							} else {
									printf("1");
							}
					} else {
							printf("0");
					}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
