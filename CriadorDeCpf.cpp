//Solicite um CPF e retorne se o mesmo é ou não válido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ent= "69597006578"
// tmp="6"

FILE *arq;
int v[11],sm;
char tmp[2];
int d1,d2,ncpf, n;
//-----------------------------------------------------------------
int main () {
n=1;
srand(time(NULL)); 
 arq = fopen("cpfs.txt", "w"); //gravação
	printf("Quantos cpfs vc quer gerar:");
	scanf("%d", &ncpf);
do{
	tmp[1]='\0';
 	
 	
	for (int i = 0; i<9; i++){
		v[i]=rand()%10;
		//printf("%d\n", rand()*4233251);
	}
	  //encontrar o primeiro digito 
	  sm=0;
	  int p=10;
	  for (int x=0; x<9; x++){
	    sm=sm+(v[x]*p);
	    p--;
	  }
	  v[9]=11-(sm%11);
	  if (v[9]>9)
	    v[9]=0;
	    
	
	  //encontrar o segundo digito 
	  sm=0;
	  p=11;
	  for (int x=0; x<10; x++){
	    sm=sm+(v[x]*p);
	    p--;
	  }
	  v[10]=11-(sm%11);
	  if (v[10]>9)
	    v[10]=0;
	
	    
	if(arq == NULL){
		printf("problema na criação do arquivo\n");
	}else{
		for(int i = 0; i < 11; i++){
			if(i == 3){
			fprintf(arq,".");	
			}
			if(i == 6){
			fprintf(arq,".");	
			}
			if(i == 9){
			fprintf(arq,"-");	
			}
		fprintf(arq,"%d", v[i]);
		}
	}
fprintf(arq,"\n");
n++;
}while(n <= ncpf);

  printf("\n\n\n");
  fclose(arq);     
  system("pause");
  return 0;
}
//-----------------------------------------------------------------

