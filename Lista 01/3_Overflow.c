#include <stdio.h>

  int main(){
    int n, n1, n2;
    char operador;
    scanf("%d", &n);
    scanf("%d %c %d", &n1, &operador, &n2);
      if(operador=='+'){
        if((n1+n2)>n){
          printf("overflow\n");
        }
        else{
          printf("no overflow\n");
        }
      }
      else if(operador=='x'){
        if((n1*n2)>n){
          printf("overflow\n");
        }
        else{
          printf("no overflow\n");
        }
      }
  }
