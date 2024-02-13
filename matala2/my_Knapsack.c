#include <stdio.h>
#include <stdlib.h>

#define Max(i, j) (((i)>(j)) ? (i) : (j))
int WEIGHTMAX = 20;



int knapSack(int weights[], int values[], int selected_bool[]){
    getInfoFromUser();
    char items[5];
    int * pMatrix = createMatrix(items, values, weights);
    printf("Maximum profit: %d" , MaximumProfit(pMatrix));
    char * pItems; sos
    return 0;
}

//function gets info from user, and creates appropriate data centers
int getInfoFromUser(){
    char items[5];
    int values[5];
    int weights[5];
    int i;
    for (i=0; i<15; i++){
        if(i%3 == 0){
            scanf("%c " , &items[i/3]);
        }
        if(i%3 == 1){
            scanf("%d ", &values[i/3 + 1]);
        }

        scanf("%d ", &weights[i/3 + 2]);
    }
    return 1;
}

//create dynamic programming table (matrix)
int * createMatrix(char items[], int values[], int weights[]){
    int numOfItems = sizeof(items)/ sizeof(char);
    int matrix[(numOfItems + 1)][(WEIGHTMAX + 1)];
    int *ret = malloc(matrix);
    int i, j;
    for(i=0; i< numOfItems+1; i++){
        for(j=0; j< WEIGHTMAX + 1; j++){
            if( i == 0 || j == 0){
                matrix[i][j] = 0;
            }
            if(weights[i] > j){
                matrix[i][j] = matrix[i-1][j];
            }
            matrix[i][j] = MAX(matrix[i-1][j], matrix[i-1][j-weights[i]] + values[i]);

        } 
    }
    return ret;
}

//returns maximum profit
int MaximumProfit(int *createMatrix){
    return createMatrix[99];
}


//returns maximum items
char * items4MaximumProfit(int *createMatrix){
    char itemsMaximumProfit[4];
    int i;
    for(i=0; i<4; i++){
        if(createMatrix[20*i + 19] != createMatrix[20*(i+1) + 19]){
            itemsMaximumProfit[i] = 'A' + i -1;
        }
    }
    return itemsMaximumProfit;
}

