#include <stdio.h>
#include <string.h>

int main(void) {
  char painel[1000];
  int leds[]= {6,2,5,5,4,5,6,3,7,6};
  int i=0, j=0, soma =0, testes=0;

  scanf("%d", &testes);
  
  for(j=0; j<testes; j++){
    scanf("%s", painel);
    soma=0;
    
    for(i=0; i<strlen(painel); i++){
      soma+= leds[painel[i]-48];
    }
    printf("%d leds\n", soma);  
    
  }  
  return 0;
}