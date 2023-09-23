#include <stdio.h>

int main() {
	unsigned long long int fib[61];
	for(int n = 0; n <= 60;n++){
		if (n == 0) {
			fib[0] = 0;
		} else if (n == 1) {
			fib[1] = 1;	
		} else {
			fib[n] = fib[n - 1] + fib[n - 2];
		}
	}

	int d, v;
	scanf("%d", &d);
	for (int i = 0; i < d; i++) {
			scanf("%d", &v);
			printf("Fib(%d) = %lld\n", v, fib[v]);
	}

	return 0;
}
