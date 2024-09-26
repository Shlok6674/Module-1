#include<stdio.h>

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
  int result = sum(n);
  printf("%d", result);
  return 0;
}

