#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {
    
  writeToFile();
   
  // Vasiot kod zapocnuva od tuka

  FILE *f;

  


  return 0;
}
