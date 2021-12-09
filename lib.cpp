//
// Created by Abram on 09/12/2021.
//
#include "lib.h"

bool find(char list1[10][20], char list2[20], int & ris){
    bool flag=false;
    ris=0;
    //Inizializzo list1
    for(int j=0; j<10; j++){
        for(int k=0; k<20; k++){
            list1[j][k]=0;
        }
    }

    for(int i=0; i<10; i++){
        int j=0;
        for(;j<20; j++){
            if((list1[i][j]!=list2[j]) and (((list1[i][j]!=list2[j]+' ') or (list1[i][j]!=list2[j]-' ')))){
                flag=false;
                break;
            }
            flag=true;
            ris=i;
        }
        if(flag and (j!=19)){
            return false;
        }
    }
    return true;
}
