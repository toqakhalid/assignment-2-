#ifndef DOMINO_H
#define DOMINO_H

#include "domino.h"
#include <iostream>

using namespace std;


class domino
{
     private:
         int left;
         int right;

    public:
        domino();
        domino(int a , int b);

        void setright(int r);
        void setleft (int l);

        int getright(){return right;}
        int getleft (){return left ;}

        void print();

        friend ostream& operator<< (ostream &out, domino d );



};

ostream& operator<< (ostream &out, domino d );

#endif // DOMINO_H
