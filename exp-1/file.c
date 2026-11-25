#include <stdio.h>
#include <stdint.h>

typedef int64_t i64;
i64 read() {
	i64 x = 0;
	int c = getchar(), f = 1;
	while (c != EOF && c != '-' && (c < '0' || c > '9'))
		c = getchar();
	if (c == '-') f = -1, c = getchar();
	while (c >= '0' && c <= '9')
		x = x * 10 + c - '0', c = getchar();
	return x * f;
}

void solve() {
	i64 a = read(), b = read();
	printf("%lld", a + b);
}

int main() {
	i64 t = read();
	while (t--) solve();
}
