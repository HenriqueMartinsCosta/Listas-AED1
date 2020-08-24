#include <stdio.h>

typedef struct pacientes{
  int t;
  int c;
}pacientes;

  int main(){
    int n, h, m, c, i, j, k, ti, ec=0;
    scanf("%d", &n);
    pacientes paciente[n];
      for(i=0; i<n; i++){
        scanf("%d %d %d", &h, &m, &paciente[i].c);
        paciente[i].t=(h*60)+m;
      }
      for(i=0; i<n; i++){
        ti=paciente[i].t;
        while(paciente[i].t>(paciente[i+1].t - 30)){
          i++;
        }
        for(k=i; k>=0; k--){
          if(paciente[k].t<(ti+(k-1)*30)){
            ec++;
            break;
          }
        }
      }
      printf("%d\n", ec);
  }
