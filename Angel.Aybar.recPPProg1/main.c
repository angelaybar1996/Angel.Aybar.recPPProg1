#include <stdio.h>
#include <stdlib.h>
/*
1. Crear una funci�n llamada aplicarDescuento que reciba como par�metro el precio
 de un producto y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

 2. Crear una funci�n que se llame contarCaracteres que reciba una cadena de caracteres como primer par�metro y
 un car�cter como segundo y devuelva la cantidad de veces que ese car�cter aparece en la cadena *

 3. Dada la estructura Notebook(id, procesador, marca, precio) generar una funci�n que permita ordenar un array de dicha
 estructura por marca. Ante igualdad de marca deber� ordenarse por precio. Hardcodear datos y mostrarlos desde el main. *

 */

 float aplicarDescuento(float precio);
 int contarCaracteres(char vec[],char caracter);

int main()
{

    float precio=1500;
    aplicarDescuento(precio);
    printf("El precio con descuento queda %d",precio);





    return 0;
}

float aplicarDescuento(float precio)
{
    float valorProducto;
    valorProducto=precio*5/100;
    return valorProducto;

}


int contarCaracteres(char vec[],char caracter)
{
    int retorno=0;
    int limite=strlen(vec);
    int cant=0;

    for(int i=0; i<limite; i++)
    {
        if(vec[i]==caracter)
        {
            retorno=1;
        }

    }
}
