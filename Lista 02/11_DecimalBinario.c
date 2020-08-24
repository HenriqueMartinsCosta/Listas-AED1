#include <stdio.h>

  int n, vet[32], resto, i, q, k;

  void decimal_binario(){
    scanf("%d", &n);
      q=0;
      if(n==1 || n==0){
        vet[0]=n;
      }
      else{
        vet[q]=n%2;
          faz_binario();
      }
      i=q;
        print();
      k--;
      if(k>0){
        decimal_binario();
      }
  }

  void faz_binario(){
    q++;
    n=n/2;
    vet[q]=n%2;
    if(n>1){
      faz_binario();
    }
  }

  void print(){
    printf("%d", vet[i]);
    if(i==0){
      printf("\n");
    }
    i--;
    if(i>=0){
      print();
    }
  }

  int main(){
    scanf("%d", &k);
      decimal_binario();
  }
