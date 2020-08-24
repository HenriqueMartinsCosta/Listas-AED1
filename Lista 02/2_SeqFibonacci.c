#include <stdio.h>

void fibonacci(int n, int num, int num1, int num2, int cont){
  if(cont<=n){
    if(cont==0){
      printf("0");
    }
    else if(cont==1){
      printf(" 1");
    }
    else{
      num=num1+num2;
      printf(" %d", num);
      num1=num2;
      num2=num;
    }
    cont++;
    fibonacci(n, num, num1, num2, cont);
  }
}

int num1=0, num2=1, num, cont=0;

  int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n, num, num1, num2, cont);
  }
