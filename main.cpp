#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int ris = 0;
    char uno[10][20];
    char due[1][20];




    for (int i=0; i<10; i++){
                cin >> uno[i];
    }
    cin >> due[0];


    if(compare(uno, due, ris)){
        cout << ris << endl;
    } else {
        cout << "non presente" << endl;
    }

    return 0;
}
