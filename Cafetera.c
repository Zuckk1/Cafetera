#include <stdio.h>
int main(){
    int opcion1, opcion2, opcion3, temp, comida;
    float sumaPrecios = 0;
    float precioCafe = 2.50;
    int Opcion;

    do {
        printf("Bienvenido a la cafeteria, elije que quieres comprar, para terminar con un 0");
        printf("\n1. Cafe $2.50: \nEleccion: ");
        scanf("%d",&Opcion);
            if (Opcion == 1) {
            sumaPrecios += precioCafe;
            }
    } while (Opcion != 0);
    printf ("\nUsted pagara: %f",sumaPrecios);

/// Use el do-while para crear un bucle en el que pido la cantidad de cafes que quiere comprar, hasta que se rompa el bucle colocando el numero 0 para seguir con el programa

    printf("\nEstas a punto de prepararte un cafe ☕︎...");
    printf("\n\n1. Prender la cafetera \n2. Colocar la capsula en la cafetera \n3. Rascarse la cabeza");
    printf("\nElige la opcion correcta: ");
    scanf("%d",&opcion1);
    if (opcion1 == 1)
    {
        printf("\n\nSiguiente paso");
    } else {
        printf("Opcion incorrecta");
        return 0;
    }

    printf("\n\n1. Tomarse el cafe \n2. Colocar la capsula en la cafetera \n3. Hacerse un huevo frito");
    printf("\nElige la opcion correcta: ");
    scanf("%d",&opcion2);
    if (opcion2 == 2)
    {
        printf("\n\nSiguiente paso");
    } else {
        printf("Opcion incorrecta");
        return 0;
    }

    printf("\nColoca los grados correctos para preparar el cafe: ");
    scanf("%d",&temp);
    if (temp >= 95)
    { 
        printf("Se cafe se quemara");
        return 0;
    } else if  (temp <= 90) {  
        printf("Su cafe estara muy frio");
        return 0;
    } else {
        printf("Siguiente paso");
    }

    printf("\n\n1. Tomarse el cafe \n2. Levitar \n3. Poner en marcha la cafetera");
    printf("\nElige la opcion correcta: ");
    scanf("%d",&opcion3);
    if (opcion3 == 3)
    {
        printf("\n\nPreparando el cafe...");  // Agregar un timer de 5 segundos 
        
    } else {
        printf("Opcion incorrecta");
        return 0;
    }
    printf("\n\nCafe listo! ☕︎ ");


return 0;
}

 /// AGREGAR PRECIOS CAFE Y COMIDAS ///