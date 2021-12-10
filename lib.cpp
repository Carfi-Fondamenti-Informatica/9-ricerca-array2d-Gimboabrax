//
// Created by Abram on 09/12/2021.
//
#include "lib.h"
#include <iostream>
using namespace std;

bool find(char list1[10][20], char list2[20], int & ris){
    char listtemp[20];
    bool flag=false, Flag;
    int temp=0;
    //Cicli for annidati x scorrere elementi di list1 e list22
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            listtemp[j]=list1[i][j];
            temp=j;

            //Condizioni per Flag, se Flag=false elementi= o elemento=elemento+-32
            if(listtemp[j]!=list2[j]){
                if(listtemp[j]==33){
                    Flag = true;
                } else if (((64 < listtemp[j]) and (listtemp[j] < 91)) and (list2[j] == listtemp[j] + 32)) {
                    Flag = false;
                } else if (((96 < listtemp[j]) and (listtemp[j] < 123)) and (listtemp[j] == list2[j] - 32)) {
                    Flag = false;
                } else {
                    Flag = true;
                }
            } else{
                Flag=false;
            }

            if(Flag){
                flag=false;
                break;
            } else{
                flag=true;
            }
        }
        if(temp==19){
            ris=i;
            return flag;
        }
    }

    return false;
}

//PROVVISORIO stampa mat
void stampa(char list1[10][20], char list2[20]) {
    cout << "list1:" << endl;
    cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << "  ";
        for (int j = 0; j < 20; j++) {
            cout << list1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "list2:" << endl;
    cout << "0  ";
    for (int i = 0; i < 20; i++) {
        cout  << list2[i] << "  ";
    }
    cout << endl;
}