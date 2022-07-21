#include<stdio.h>

void	ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}


int main()
{
  int a = 1;
  int b = 2;
  int *pa = &a;
  int *pb = &b;
  
  printf("%d %d\n", a, b);
  ft_swap(pa, pb);
  
  printf("%d %d", a, b);
  return 0;
}