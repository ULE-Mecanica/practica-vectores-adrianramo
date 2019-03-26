#include <stdio.h>
#include <math.h>

void cargar(int v[2]);
float distancia(int v1[2], int v2[2]);

int main(){

int v1 [2];
int v2 [2];
	cargar(v1);
	cargar(v2);
float de=distancia(v1,v2);
printf("%f\n\n",de);

return 0;
}

void cargar(int v[2]){
int i;

for(i=0;i<2;i++){
	scanf("%d",&v[i]);}
	printf("\n");
}

float distancia(int v1[2], int v2[2]){

int x1,y1,x2,y2;
float de;

x1=v1[0];
x2=v1[1];
y1=v2[0];
y2=v2[1];

de=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

printf("La distancia es (%d,%d) y (%d,%d) es %f\n",x1,x2,y1,y2,de);

}
