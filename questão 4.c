 #include <stdio.h>
#include <math.h>

int main()
{
   int lin,col,tab;
   int mat [4][4];
   for(lin= 0; lin<4; lin++){
       for(col = 0; col <4; col++){
           printf ("Digite elemento da linha %d, coluna %d da matriz: ", lin + 1, col +1); 
           scanf ("%d", &mat [lin][col]);
       }
   }
    printf("\n\nDiagonal principal\n\n");
 for (lin=0; lin<=3;lin++)
 {
 printf("%d\n",mat[lin][lin]);
 for (tab=1;tab<=lin+1;tab++)
 printf("\t");
 }
}
