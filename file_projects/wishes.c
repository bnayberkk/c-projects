#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char yeniyildilekleri[5][20];
  FILE *dilek;
  int i;
  
  for (i=0; i<5; i++) {
      
      printf("Dilek %d girin: ", i+1);
      fgets(yeniyildilekleri[i], 20, stdin);
      }
      
      dilek = fopen("newyearwishes.txt", "wt");
      
      if (dilek == NULL) {
      printf ("Dosya acilmadi\n");
      return 1;
      }
      
      for (i = 0; i<5; i++) {
          fputs(yeniyildilekleri[i], dilek);
          fputs("\n", dilek);
          }
      fclose(dilek);
      printf("Dilekleriniz newyearwishes.txt dosyasinda\n");    
  
  

  return 0;
}    
                 

