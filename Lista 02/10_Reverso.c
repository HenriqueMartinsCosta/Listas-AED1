#include <stdio.h>
#include <string.h>

char numero[7];
int cond=1;

void reverso(int i){
    if(i>=0){
      if(cond && numero[i]=='0'){
        reverso((i-1));
      }
      else if(cond && numero[i]!='0'){
        cond=0;
        reverso(i);
      }
      else{
        printf("%c", numero[i]);
        reverso((i-1));
      }
    }
}

  int main(){
    int i;
    scanf("%s", &numero);
      i=strlen(numero)-1;
      reverso(i);
  }
