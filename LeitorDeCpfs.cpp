//Solicite um CPF e retorne se o mesmo � ou n�o v�lido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ent= "69597006578"
// tmp="6"

FILE *arq;
int v[11],sm;
char tmp[15], tmp2[15]="109.862.559-55";
int d1,d2,ncpf, n;
//-----------------------------------------------------------------
int main () {
n=1;
srand(time(NULL)); 
 arq = fopen("cpfs.txt", "r"); //grava��o
 
for(int i = 0; i <= 220000000; i++){
	fscanf(arq,"%s",&tmp);
	//printf("%s\n",tmp);
	if(tmp == tmp2){
		printf("TEM SEU CPF AQUI");	
	}
}
 
  fclose(arq);     
  system("pause");
  return 0;
}
//-----------------------------------------------------------------

