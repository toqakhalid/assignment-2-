
#include "domino.h"
#include <iostream>

domino:: domino(){
    right=0;
    left =0;
}

domino :: domino(int a , int b){
    right= a;
    left = b;
}

/*void domino :: print(){
        for (int i = 0; i <= right; i++){
        for(int j=0 ;j <= left;j++){
        cout<< i << " " << j << "   ";}
        cout<< endl;}
    }*/

ostream& operator<< (ostream &out, domino d ){
     for (int i = 0; i <= d.right; i++){
        for(int j=0 ;j <= d.left;j++){
        cout<< i << " " << j << "   ";}
        cout<< endl;}

    return out;
}
