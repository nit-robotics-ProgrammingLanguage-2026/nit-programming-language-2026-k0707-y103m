#include <stdio.h>
 
int is_prime(int x);
 
int main(void) {
int n;
scanf("%d", &n);
 
if (n > 10000) {
printf("NG\n");
} else if (n < 2) {
printf("0\n");
} else {
int count = 0;
for (int i = 1; i <= n; i++) {
if (is_prime(i)) {
count++;
}
}
printf("%d\n", count);
}
 
return 0;
}
 
int is_prime(int x) {
// x が素数なら 1、そうでなければ 0 を返す
if (x <= 1) {
return 0;
}
for (int i = 2; i * i <= x; i++) {
if (x % i == 0) {
return 0;
}
}
return 1;
}