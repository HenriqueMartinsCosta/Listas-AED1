#include <stdio.h>

  int main(){
    int n, s, i, j, senha;
    scanf("%d", &n);
    int fila[n];
      for(i=0; i<n; i++){
        scanf("%d", &fila[i]);
      }
      scanf("%d", &s);
      for(i=0; i<s; i++){
        scanf("%d", &senha);
          for(j=0; j<n; j++){
              if(senha==fila[j]){
                fila[j]=0;
              }
          }
      }
      for(i=0; i<n; i++){
        if(fila[i]!=0){
          if(i!=(n-1)){
            printf("%d ", fila[i]);
          }
          else{
            printf("%d\n", fila[i]);
          }
        }
      }
  }
