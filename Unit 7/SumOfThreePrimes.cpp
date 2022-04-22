
#include<cstdio>
#include<math.h>
#include<string.h>
#define N 10000000
bool P[10000001];
void makePrime(){
	memset(P, false, sizeof(P));
	int limit = sqrt((double)N);
	for (int i = 2; i <= limit; i++){
		if (!P[i]){
			for (int k = (N - 1) / i, j = i*k; k >= i; k--, j -= i)
				P[j] = true;
		}
	}
}
void Goldbach(int n){
	for (int i = 2;; i++){
		if (!P[i] && !P[n - i]){
			printf("%d %d", i, n - i);
			return;
		}
	}
}
int main(){
	makePrime();
	int n;
	while (scanf("%d", &n) == 1){
		if (n < 8)
			puts("Impossible.");
		else{
			if (n % 2 == 0)
				printf("%d %d ", 2, 2), n -= 4;
			else
				printf("%d %d ", 2, 3), n -= 5;
			Goldbach(n);
			putchar('\n');
		}
	}
	return 0;
}