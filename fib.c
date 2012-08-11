#define FIB(x) fib(x)

unsigned long fib(int n)
{
  if (n<3) return 1;
  return FIB(n-2)+FIB(n-1);
}
