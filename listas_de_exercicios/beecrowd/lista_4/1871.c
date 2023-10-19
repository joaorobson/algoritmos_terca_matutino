#include <stdio.h>

int main(){

	int a, b , soma, res, i;
	scanf("%d %d", &a, &b);

	while(a != 0 && b != 0){
		soma = a + b;
		res = 0;
		i = 1;
		while(soma){
			if(soma%10){
				res += (soma%10)*i;
				i *= 10;
			}
			soma /= 10;
		}
		printf("%d\n", res);
		scanf("%d %d", &a, &b);
	}
	

	return 0;
}
