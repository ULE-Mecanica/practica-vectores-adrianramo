#include <stdio.h>
#define TAM 5

void vector(int v[TAM]);
void compara_vector(int v1[5],int v2[5]);

int main(){
int v1[TAM],v2[TAM];

vector(v1);
vector(v2);

compara_vector(v1,v2);

return 0;
}

/*Cargar el vector*/
void vector(int v[TAM]){
int i;

for(i=0;i<TAM;i++){
	printf("Elementos del vector:\n");
	scanf("%d",&v[i]);
	}
	printf("Segundo vector:\n");
}


void compara_vector(int v1[5],int v2[5]){

int i;

int iguales=1;
for(i=0;i<TAM;i++){
	if(v1[i]!=v2[i])
		{iguales=0;}
}
if(iguales == 0){
	printf("No son iguales.\n");}
else{
	printf("Si que lo son.\n");}
}
