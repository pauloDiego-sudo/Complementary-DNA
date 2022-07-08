#include <stdio.h>

char *dna_strand(const char *dna){
  char *complement,c;
  int tam=0;
  while(dna[tam] != NULL){
    tam++;
  }
  complement = (char *) malloc(tam);
  if(complement == NULL){
    
  }
  //printf("%d",sizeof(dna));
 // char complement[sizeof(dna)];
  int i;
  for(i=0;i<tam;i++){
    if(dna[i]=='A'){complement[i]='T';}
    else if(dna[i]=='T'){complement[i]='A';}
    else if(dna[i]=='C'){complement[i]='G';}
    else if(dna[i]=='G'){complement[i]='C';}
    
  }
    return complement;
}

int main(void) {
  char c[]="CATAGCTAGCTAGCTAGCTAATATAAAAGCTGCTCTAAATTTATATATATATATGCTCTCTTATGTCTATCTGTCTAAT";
  printf("%s",dna_strand(c));
  return 0;
}