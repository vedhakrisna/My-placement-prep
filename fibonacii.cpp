int fibonacii(int n){
   if(n<=1) return n;
   return fibonacii(n-1) + fibonacii(n-2);
}
