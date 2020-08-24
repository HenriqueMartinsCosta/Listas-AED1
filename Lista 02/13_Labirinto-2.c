#include <stdio.h>

  int main(){
    int m, n, i, j, linha, coluna, aux, cont, q=0;
    scanf("%d %d", &m, &n);
    int mat_linha[m][n], mat_coluna[m][n];
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          scanf("%d %d", &mat_linha[i][j], &mat_coluna[i][j]);
        }
      }
        for(i=0; i<m; i++){
          for(j=0; j<n; j++){
            linha=i; coluna=j;
            for(cont=0; cont<(m*n); cont++){
              aux=linha;
              linha=mat_linha[linha][coluna];
              coluna=mat_coluna[aux][coluna];
                if(linha==0 && coluna==0){
                  q++;
                  break;
                }
            }
          }
        }
        printf("%d\n", q);
  }
