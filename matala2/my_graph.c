#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN(i, j) (((i)<(j)) ? (i) : (j))


int main(){
    char option;
    scanf("&c" , &option);
    if(option == "A"){
        getMatrix();
    }
    if(option == "B"){
        isPath();
    }
    if(option == "C"){
        shortestPath();
    }
    if(option == "D" || option ==  EOF){
        return 0;
    }
}

// function 1. gets matrix from user
int * getMatrix(){
    int matrix[10][10];
    int *pmat = matrix;
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
             scanf("%d ", &(matrix[i][j]));
                }
          }
    return pmat;
}


// function 2. returns true or false(0) if there is no path
bool isPath(){
    int start, finish;
    scanf("%d %d", start, finish);
    int * pmat = createBetterArray();
    return pmat[10*start +finish];
}

// functions helper
int * createBetterArray(){
    int *pmat = getMatrix();
    int i, j, special=0;
    while(special <=9){
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if( i == special || j== special){
                continue;
            }
            pmat[10*i+ j] = MIN(pmat[10*i +j] , pmat[10*i + special] + pmat[10 *special +j]);
        }
    }
    special = special +1;
    }
    return pmat;
}

//return shortest path. start and finish given by user
int shortestPath(){
    int start, finish;
    scanf("%d %d", &start, &finish);
    int * pmat = createBetterArray();
    return pmat[10*start +finish];
}


