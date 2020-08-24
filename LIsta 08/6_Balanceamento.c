#include <stdio.h>
#include <string.h>

  int main(){
    int i, j, tamanho, correta=1;
    char e[1000];
    scanf("%s", &e);
    tamanho=strlen(e);
      for(i=0; i<tamanho; i++){
        achou:
        if(e[i]=='('){
          e[i]='0';
          if(i!=(tamanho-1)){
            for(j=(i+1); j<tamanho; j++){
              if(e[j]==')'){
                e[j]='0';
                goto achou;
              }
            }
            correta=0;
          }
        }
        else if(e[i]==')'){
          correta=0;
        }
      }
      if(correta==1){
        printf("correta\n");
      }
      else{
        printf("incorreta\n");
      }
  }
