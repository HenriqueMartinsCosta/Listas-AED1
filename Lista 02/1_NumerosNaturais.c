#include <stdio.h>

void numeros_naturais(int n, int num){
    if(num==(n-1)){
      printf("%d", n);
    }
    else{
      num++;
      printf("%d ", num);
      numeros_naturais(n, num);
    }
}

int num=0;

  int main(){
    int n, num=0;
    scanf("%d", &n);
      numeros_naturais(n, num);
  }
