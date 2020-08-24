#include <stdio.h>

 int main(){
   int ano_atual, ano_cometa=1986, n, anos_bissextos=0;
   scanf("%d", &ano_atual);
    if(ano_atual>=ano_cometa){
      while(ano_atual>ano_cometa){
        ano_cometa+=76;
      }
      for(n=1986; n<ano_atual; n++){
        if(n%4==0 && n%100!=0){
          anos_bissextos++;
        }
        else if(n%400==0){
          anos_bissextos++;
        }
        if(anos_bissextos==365){
          ano_cometa++;
          anos_bissextos=0;
        }
      }
    }
    else{
      while(ano_atual<ano_cometa){
        ano_cometa-=76;
      }
      ano_cometa+=76;
      for(n=1986; n>ano_atual; n--){
        if(n%4==0 && n%100!=0){
          anos_bissextos++;
        }
        else if(n%400==0){
          anos_bissextos++;
        }
        if(anos_bissextos==365){
          ano_cometa--;
          anos_bissextos=0;
        }
      }
    }
    printf("%d\n", ano_cometa);
 }
