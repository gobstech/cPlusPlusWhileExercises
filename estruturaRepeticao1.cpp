#include <bits/stdc++.h>

int main() {
	int a, b, c, aux;
	scanf("%d %d", &a, &b);
	c = a + b;
	aux = a - b;
	while (a != b) {
		b = b + 2;
		c = c + b;
		a = a - 1;
		aux = aux * 2;
	}
	printf("%d %d %d %d", a, b, c, aux);
	return 0;
}
