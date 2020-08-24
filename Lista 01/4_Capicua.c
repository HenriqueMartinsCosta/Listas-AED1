#include <stdio.h>

  int main(){
    int i, qtd, n, n1, n2, n3, n4, nf;
    scanf("%d", &qtd);
      for(i=0; i<qtd; i++){
        scanf("%d", &n);
          n1=n/1000;
          n2=(n%1000)/100;
          n3=(n%100)/10;
          n4=n%10;
          nf=(n4*1000)+(n3*100)+(n2*10)+n1;
            if(nf==n){
              printf("yes");
            }
            else{
              printf("no");
            }

            if(i<(qtd-1)){
              printf(" ");
            }
            else if(i==(qtd-1)){
              printf("\n");
            }
      }
  }
