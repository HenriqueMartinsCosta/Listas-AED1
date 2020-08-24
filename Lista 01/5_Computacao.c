#include <stdio.h>

  int main(){
    int i, i1, qtd, n, q, resto, vet[100];
    scanf("%d", &qtd);
      for(i=0; i<qtd; i++){
        scanf("%d", &n);
        q=0;
          if(n<=3){
            if(n==0){
              printf("A");
            }
            else if(n==1){
              printf("C");
            }
            else if(n==2){
              printf("G");
            }
            else if(n==3){
              printf("T");
            }
          }
          else{
            vet[q]=n%4;
            while(n>1){
              q++;
              n=n/4;
              vet[q]=n%4;
            }
            for(i1=q; i1>=0; i1--){
              if(vet[i1]==0 && i1!=q){
                printf("A");
              }
              else if(vet[i1]==1){
                printf("C");
              }
              else if(vet[i1]==2){
                printf("G");
              }
              else if(vet[i1]==3){
                printf("T");
              }
            }
          }
          printf("\n");
      }
  }
