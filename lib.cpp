//
// Created by Abram on 10/12/2021.
//
#include "lib.h"
#include <cstring>
using namespace std;

bool compare(char list1[10][20], char list2[0][20], int & ris){
    for(int i=0; i<10; i++) {
            if (strcmp(list1[i], list2[0]) == 0) {
                ris=i;
                return true;
            }
    }
    return false;
}
