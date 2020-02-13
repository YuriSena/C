#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[30], s2[30], s3[60];
    int i=0, tamanho=0, indiceString1 = 0, indiceString2 = 0, tamanhoString1, tamanhoString2;

    printf("String 1: ");
    scanf(" %s", s1);

    printf("String 2: ");
    scanf(" %s", s2);

    tamanhoString1 = strlen(s1);
    tamanhoString2 = strlen(s2);
    tamanho = tamanhoString1 + tamanhoString2;

    for (i; i < tamanho; i++) {
      if (i % 2 == 0 && indiceString1 < tamanhoString1) {
        s3[i] = s1[indiceString1];
        indiceString1++;
      } else if (indiceString2 >= tamanhoString2) {
        s3[i] = s1[indiceString1];
        indiceString1++;
      }
      else {
        s3[i] = s2[indiceString2];
        indiceString2++;
      }
    }

    printf("String 3: %s\n", s3);
    return 0;
}
