#include <stdio.h>

    int main() {

        int i = 0;

            while (i <= 10){

                if(i % 2 != 0)
                     {
                     printf("O numero %d é impar! \n", i);
                     }

                i++;
         
         }

        return 0;
        
    }

    
/* caso queira ver os pares  

                if(i % 4 == 0)
            {
            printf("O numero %d é par! \n", i);
            }
            
*/

/* caso queira ver os impares 

                if(i % 4 != 0)
            {
            printf("O numero %d é impar! \n", i);
            }

*/