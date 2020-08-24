#include <stdio.h>

  int main(){
    int num1, num2, n1, n2, n3;
    scanf("%d %d", &num1, &num2);

      //num1
      n1=num1/100;
      n2=(num1/10)%10;
      n3=(num1%100)%10;
      num1=(n3*100)+(n2*10)+n1;
      //num2
      n1=num2/100;
      n2=(num2/10)%10;
      n3=(num2%100)%10;
      num2=(n3*100)+(n2*10)+n1;

        if(num1>num2){
          printf("%d\n", num1);
        }
        else{
          printf("%d\n", num2);
        }
  }
