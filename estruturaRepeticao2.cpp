#include <bits/stdc++.h> 

int main() {
	
	int x, y, a, b;
	scanf("%d %d", &x, &y);
	a = x * y;
	b = x + y + a;
	
	while (b > a) {
		if (x < y) {
			x = y + a;
		}
		
		if (x >= y) {
			y = x + a;
		}
		b = b - 4;
	} 
	printf("%d %d %d %d", x, y, a, b);
	return 0;
}
