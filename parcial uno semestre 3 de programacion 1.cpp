#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void datos(int Mat[3][3]){
int i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Ingrese numero fila %d columna %d: ", i+1, j+1);
scanf("%d",&Mat[i][j]);
}
}
}

int suma(int Mat[3][3]){
int i, j, k=0;
for(i=0;i<3;i++){
printf("\n");
for(j=0;j<3;j++){
printf("%d ",Mat[i][j]);
k=k+Mat[i][j];
}
}
printf("\nLa suma total de toda la matriz es: %d", k);
}

main (){
setlocale (LC_ALL, "spanish");
system("color 0A");
system("title Matriz 1");

int i, j;
int Mat[3][3];

printf("Matrices\n\n");

datos(Mat);
suma(Mat);

}
