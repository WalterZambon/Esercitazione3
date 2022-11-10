#include <stdio.h>
#include <stdlib.h>

int main(){

    int v_size = 6;
    int v1[6] = {0, 1, 2, 0, 1, 2};
    int v2[6] = {2, 1, 1, 2, 2, 2};

//DA QUI
    int min_1 = 0;
    int min_2 = 0;
    int count = 0;
    int y = 0;
    int diff;

    //Ordino V1
    for (int i = 0; i < v_size-1; i++){

            min_1 = i;

            for (int j = i + 1; j < v_size; j++){

                if (v1[j] < v1[min_1]) {
                    min_1 = j;
                }

            }

            int tmp = v1[i];
            v1[i] = v1[min_1];
            v1[min_1] = tmp;
        }
        
        //Ordino v2
        for (int i = 0; i < v_size-1; i++){

            min_2 = i;

            for (int j = i + 1; j < v_size; j++){

                if (v2[j] < v2[min_2]) {
                    min_2 = j;
                }

            }

            int tmp = v2[i];
            v2[i] = v2[min_2];
            v2[min_2] = tmp;
        }

        //Controllo
        for (int i = 0; i < v_size; i ++){
            
            if(v1[i] != v2[i]){
                count ++;
            }
        }

        if (v1[0] < v2[0]){
            
            while (v1[y] != v2[y]){

                y++;
            }

            diff = v_size - y;
            count -=diff;

        }

    //NON INSERIRE
    printf("\nV1 vale\n");

        for (int i = 0; i < v_size; i ++){

           printf(" %d ", v1[i]);
        }

    printf("\nV2 vale\n");

        for (int i = 0; i < v_size; i ++){

           printf(" %d ", v2[i]);
        }

       

    printf("\nCount vale: %d", count);


        return 0;
}