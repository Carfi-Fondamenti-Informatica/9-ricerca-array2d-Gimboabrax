//
// Created by Abram on 09/12/2021.
//
#include "lib.h"

bool find(char list1[10][20], char list2[20], int & i){
    bool flag=false;
    for(i=0; i<10; i++){
        int j=0;
        for(j; j<20; j++){
            if((list1[i][j]!=list2[j]) and (((list1[i][j]!=list2[j]+' ') or (list1[i][j]!=list2[j]-' ')))){
                flag=false;
                break;
            }
            flag=true;

        }
        if(flag and (j!=19)){
            return true;
        }


    }
    return false;
}
