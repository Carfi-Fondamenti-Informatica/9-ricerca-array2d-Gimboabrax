#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int ris=0;
    char list2[20];
    char **list1;

    //Riempio list1 e list2
    for(int j=0; j<10; j++){
        for(int k=0; k<20; k++){
            cin >> list1[j][k];
            cin >> list2[k];
        }
    }

    //Chiamo find() e stampo
    if(find(list1, list2, ris)){
        cout << ris << endl;
    } else{
        cout << "non presente" << endl;
    }


    return 0;
}
