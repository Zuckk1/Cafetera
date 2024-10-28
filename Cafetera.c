#include <stdio.h>
int main(){
    int opcion1, opcion2, opcion3;
    printf("Estas a punto de prepararte un cafe...");
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
    printf("\n\nCafe listo!");


return 0;
}

 