/*----------------------------------------------------------------
|  Autor: Sebastián Vázquez Real                                                        |
|  Fecha: 03/03/2016                              Versión: 1.0              |
|-----------------------------------------------------------------|
|  Descripción del Programa:                                      |
|                                                                 |
| ----------------------------------------------------------------*/

// Incluir E/S y Librerías Standard

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Zona de Declaración de Constantes

// Zona de Declaración de Tipos

// Zona de Cabeceras de Procedimientos y Funciones

// Programa Principal
int main()
{
int elec=1,varprog=1;
float f1,f2,fx,c1,c2,cx,a,b,c,d,e1,e2,ex,x1,x,x2,y,y1,y2;
    // Zona de Declaración de Variables del Programa principal
printf("\n\n\n\t###########################################");
printf("\n\t######                                #####");
printf("\n\t######         INTERPOLACION          #####");
printf("\n\t######         SIMPLE y DOBLE         #####");
printf("\n\t######             ------             #####");
printf("\n\t######             por SVR            #####");
printf("\n\t######                                #####");
printf("\n\t###########################################");

	cout << "\n\n        presione cualquier tecla para CONTINUAR..." <<endl;
	getch();
    system("cls");
    
do{
printf("\n\t#################################");
printf("\n\t######         MENU         #####");
printf("\n\t#################################");
printf("\n\n\t(1) Interpolacion");
printf("\n\n\t(2) Doble Interpolacion");
printf("\n\n\t(3) Salir");
printf("\n\n\t   Introduzca eleccion (Numero):\n");
scanf("%d",&elec);
system("cls");


 switch ( elec )
 {
          
case 1:
do{
     printf("\n\t#################################");
     printf("\n\t######    INTERPOLACION     #####");
     printf("\n\t#################################\n\n");
     printf("\t                |   \n");
     printf("\t                V    \n");
     printf("\t         | X1 |(X) | X2 |\n");
     printf("\t         | Y1 |(Y)?| Y2 |\n");
     
     printf("\n\t   Introduzca X1: ");
     scanf("%f",&x1);
     printf("\n\t   Introduzca Y1: ");
     scanf("%f",&y1);
     printf("\n\t   Introduzca X2: ");
     scanf("%f",&x2);
     printf("\n\t   Introduzca Y2: ");
     scanf("%f",&y2);
     printf("\n\t   Introduzca X: ");
     scanf("%f",&x);
     
     y=((y2-y1)*(x-x1))/(x2-x1)+y1;
     system("cls");
     printf("\n\t                   RESULTADOS");
     printf("\n\t             -----------------------");
     printf("\n\t         | %.4f | %.4f  | %.4f |\n",x1,x,x2);
     printf("\t         | %.4f | %.4f  | %.4f |\n",y1,y,y2);
     printf("\n  El resultado de la interpolacion (Y) es: %.4f",y);
     printf("\n\n\tREALIZAR OTRO CALCULO?:\n");
     printf("\n1:SI");
     printf("\n2:NO\n\n");
     scanf("%d",&varprog);
            system("cls");
}
while(varprog!=2); 
break;

case 2:
     
     do{
     printf("\n\t#################################");
     printf("\n\t######    DOBLE INTERP.     #####");
     printf("\n\t#################################\n\n");
     printf("\t                 |   \n");
     printf("\t                 V    \n");
     printf("\t         | C1 |(CX)| C2 |\n");
     printf("\t    | F1 | A  |    |  C |\n");
     printf("\t  ->|(FX)| ?  |(Y)?|  ? |\n");
     printf("\t    | F2 | B  |    |  D |");
     
     printf("\n\n\t   Introduzca C1: ");
     scanf("%f",&c1);
     printf("\n\t   Introduzca CX: ");
     scanf("%f",&cx);
     printf("\n\t   Introduzca C2: ");
     scanf("%f",&c2);
     printf("\n\t   Introduzca F1: ");
     scanf("%f",&f1);
     printf("\n\t   Introduzca A: ");
     scanf("%f",&a);
     printf("\n\t   Introduzca C: ");
     scanf("%f",&c);
     printf("\n\t   Introduzca F2: ");
     scanf("%f",&f2);
     printf("\n\t   Introduzca B: ");
     scanf("%f",&b);
     printf("\n\t   Introduzca D: ");
     scanf("%f",&d);
     printf("\n\t   Introduzca FX: ");
     scanf("%f",&fx);
     
     ex=a-((a-b)*(f1-fx))/(f1-f2)-((c1-cx)*(a-c-((a-b)*(f1-fx))/(f1-f2)+((c-d)*(f1-fx))/(f1-f2)))/(c1-c2);
     e1=(((b-a)*(fx-f1))/(f2-f1)+a);
     e2=(((d-c)*(fx-f1))/(f2-f1)+c);
     
     system("cls");
     printf("\n\t                RESULTADOS");
     printf("\n\t         -----------------------\n");
     printf("\t              | %.4f | %.4f | %.4f |\n",c1,cx,c2);
     printf("\t    | %.4f | %.4f |        | %.4f |\n",f1,a,c);
     printf("\t    | %.4f | %.4f | %.4f | %.4f |\n",fx,e1,ex,e2);
     printf("\t    | %.4f | %.4f |        | %.4f |",f2,b,d);
     
     
     printf("\n\n  El resultado de la interpolacion (Y) es: %.4f",ex);
     printf("\n\n\tREALIZAR OTRO CALCULO?:\n");
     printf("\n1:SI");
     printf("\n2:NO\n\n");
     scanf("%d",&varprog);
            system("cls");
}
while(varprog!=2); 
     
break;
		 
default:
break;
		  
      }
}
while(elec!=3);

    return 0;           // Valor de retorno al S.O.
}

// Implementación de Procedimientos y Funciones
