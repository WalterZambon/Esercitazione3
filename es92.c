#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    const int v_size = 6;
    int v1[v_size] = {0, 1, 2, 0, 1, 2};
    int v2[v_size] = {2, 1, 1, 2, 2, 2};

//DA QUI
    int min_1 = 0;
    int min_2 = 0;
    int count = 0;
    bool c = true;
   

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

    int x = 0;
    int y = 0;
    int count_temp = 0;
    int count_diff = 0;

    do{

        while(y < v_size){

            if(v1[x] == v2[y])
                c = false;

            y++;
        }

        y = 0;
        x ++;

        if( c == false)
            count_temp++;
        
    } while (x < v_size);

    c = true;
    
    
    for ( int i = 0; i < v_size; i ++){

        c = true;

        for(int j = 0; j < v_size; j++){

            if(v1[i] == v2[i]){
                c = false;
            }
        }

        if(c == false)
            count_diff++;
    }

   count = count_temp - count_diff; 

    //FINE

    //Stampo v1
    for (int i = 0; i < v_size; i ++){

        printf(" %d ", v1[i]);
    }

    printf("\n");

    //Stampo v2
    for (int i = 0; i < v_size; i ++){

        printf(" %d ", v2[i]);
    }

        
    printf("\nCount vale: %d", count);


    return 0;
}