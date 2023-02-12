//AED tarefa 01
//Bruno Soares

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
int main( ) {

  // declarando variaveis
  char x[ 15 ], xContario[ 15 ];
  int i, tamanho, isPalindrome = 0;

  // pedindo o número ao usuário
  printf( "Digite um numero de ate 15 digitos: " );
  scanf( "%s", x );

  // descobrindo o tamanho da string e fazendo uma cópia do número( x )
  tamanho = strlen( x );

  for ( i = 0; i < strlen( x ); i++ ) {
    xContario[ i ] = x[ tamanho - 1 ];
    tamanho--;
  }

  // comparando os números
  tamanho = strlen( x );
  for ( i = 0; i < tamanho; i++ ) {
    if ( x [ i ] == xContario [ i ] )
      isPalindrome++;
  }

  // imprimindo o resultado(se é ou não palindrome)
  if ( tamanho == isPalindrome ) {
    printf( "O numero eh palindromo" );

  } else {
    printf( "O numero nao eh palindromo" );
  }
  return 0;
}