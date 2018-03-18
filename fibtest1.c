  #include<stdio.h>

  long Fib1(int n)
  {
    if(n==1 || n==2)
    return 1;
    return(Fib1(n-1) + Fib1(n-2));
  }
  
  int main()
  {
  int num;
  scanf("%d",&num);
  printf("%ld\n",Fib1(num));
  return 0;
  }
