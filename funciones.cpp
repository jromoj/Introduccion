#include <iostream>
#include<cmath>
#include <cstdlib>

/* 
 comentarios
*/

int main(int argc, char *argv[]){

  return 0;
}

void print_sum_multiples(int m, int n){
  int suma = 0;

  for (int ii = m; ii < n; ++ii) 
  {
    if ( (ii%3 == 0) || (ii%5 == 0) ) 
    {
	    suma += ii;
    }
  }
    std::cout << "La suma es: " << suma << "\n";
}

void sum_even_fibonacci(int nmax){
  int suma = 0;
  int na = 0, nb = 1;

  int term = na + nb;
  while (term <= nmax) {
    if (term%2 == 0) {
      suma += term;
    }
    //std::cout << term << " ";
    na = nb;
    nb = term;
    term = na + nb;
  }
  std::cout << "suma: " << suma << "\n";
}