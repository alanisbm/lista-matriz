#include <stdio.h>
#include <math.h> 

int main()
{
   int lin,col,tab;
   int mat [3][3];
   for (lin = 0; lin < 3; lin++){
       for (col = 0; col < 3;col++){
            printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
             scanf("%d", &mat[lin][col]);
       }
   }
   printf("\n\nMatriz menos a diagonal principal\n\n");
 for (lin=0; lin<3;lin++)
 {
 for (col=0;col<3;col++)
 {
 if (lin != col)
 printf("%d",mat[lin][col]);
 printf("\t");
 }
 printf("\n");
 }
}
