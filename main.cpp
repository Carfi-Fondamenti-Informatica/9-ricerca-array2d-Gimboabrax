#include <iostream>
#include "lib.h"
using namespace std;

    int main() {
        int ris = 0;
        char list2[20];
        char list1[10][20];

        //Inizializzo list1
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 20; k++) {
                list1[j][k] = '1';
            }
        }

        //Inizializzo list2
        for (int j=0; j<20; j++){
            list2[j]= '1';
        }

        //Riempio list1
        for (int j = 0; j < 10; j++) {
            for (int k = 1; k < 20; k++) {
                if (k == 1) {
                    cin >> list1[j][0];
                } else if (list1[j][k - 1] != '0') {
                    cin >> list1[j][k];
                } else {
                    list1[j][k] = '0';
                    list1[j][k-1]= '0';
                }
            }
        }

        //Riempio list2
        for (int k = 1; k < 20; k++) {
            if (k == 1) {
                cin >> list2[0];
            } else if (list2[k - 1] != '0') {
                cin >> list2[k];
            } else {
                list2[k] = '0';
            }
        }

        //PROVVISORIO
        stampa(list1, list2);

        //Chiamo find() e stampo
        if (find(list1, list2, ris)) {
            cout << ris << endl;
        } else {
            cout << "non presente" << endl;
        }

        return 0;
    }
