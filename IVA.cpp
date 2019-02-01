#include<stdio.h>
//Programa que solicita el precio individual de un producto y la cantidad a comprar,aplicando el individual
int main()
{
      int precio,cantidad,total;
      printf("\nCalcular IVA de un producto\n\n");
      printf("       //  //   //   //   \n");
      printf("      //   //  //   ////  \n");
      printf("     //    // //   // //  \n");
      printf("    //     ////   //////  \n");
      printf("   //      ///   //   //  \n");
      printf("  //       //   //    //  \n");
      //Precio del producto
      printf("\nEscriba el precio del producto: ");
      scanf("%d", &precio);
      //cantidad a llevar
      printf("\nEscriba la cantidad a llevar:");
      scanf("%d", &cantidad);
      //valor final
      printf("\n");
      total=precio*cantidad+0.14;
      printf("El valor del producto con el IVA incluido es de: %d", total);
      printf("\n\n");
      printf("\n\n");
      return 0;
}
