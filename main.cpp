#include <iostream>
#include "lib.h"
using namespace std;




int main() {
    int i=0;
    char list2[20];
    char **list1;
    for(int j=0; j<10; j++){
        for(int k=0; k<20; k++){
            cin >> list1[j][k];
            cin >> list2[k];
        }
    }
    if(find(list1, list2, i)){
        cout << i << endl;
    } else{
        cout << "non presente" << endl;
    }


    return 0;
}
