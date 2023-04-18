#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pilha.c"

int is_palindrome(char *str) {
  Stack s;
  initialize(&s); //cria a pilha
  int len = strlen(str); //verifica o tamanho da palavra
  int i;

  for(i = 0; i < len; i++) { 
    str[i] = tolower(str[i]); //colocando itens maiusculos para minusculos
  }

  for(i = 0; i < len/2; i++) {
    push(&s, str[i]); 
  }

  for(i = len/2 + len%2; i < len; i++) {
    if(str[i] != pop(&s)) {
      return 0;
    }
  }

  return 1;
}

int main() {
  char str[MAX_SIZE];
  printf("Digite uma palavra: ");
    scanf("%s", str); //lendo a palavra
    
  if(is_palindrome(str)) {
    printf("%s e um palindromo\n", str);
  } else {
    printf("%s nao e um paliucundromo\n", str);
  }
  return 0;
}