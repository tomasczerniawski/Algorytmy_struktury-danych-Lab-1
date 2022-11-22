## Rekurencja
# Zadania 2 Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu Fibonacciego


fib(int n)
{
    if (n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

## Rekurencja
# Zadania 3 Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu arytmcznego

ciag(int n)
{
	if(n==1) 
		return 1;
	if(n==2) 
		return 0.5;

return -ciag(n-1)*ciag(n-2);
}

## Rekurencja
# Zadania 4 Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego

wyrazN_rekurencja(double a1, double q, int n) {
  if (n == 1) return a1;
  return q * wyrazN_rekurencja(a1, q, n - 1);
}

## Rekurencja
# Zadania 5 Napisz funkcję rekurencyjną do wyprowadzenia n-tej liczby trójkątu Paskalia

int f(int n,int k)
{
   if(n==k || n==0)
      return 1;
   if(k==1 || k==n-1)
      return n;
   return f(n-1,k-1)+f(n-1,k);
}






