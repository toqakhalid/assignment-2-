#ifndef MATRIX_H
#define MATRIX_H
#include "matrix.h"

#include <iostream>
using namespace std;


class matrix
{
    public:

    friend ostream& operator<< (ostream &out, matrix mat);
    matrix (int row, int col, int num[], matrix& mat); /// constructor
    matrix operator+= (matrix& mat1);
    matrix operator -- (int a);
    matrix operator ++ (int a );
   matrix operator-= (matrix& mat1);
   matrix  operator += (int scalar);
   matrix  operator-= (int scalar);
 matrix operator+  (const matrix &mat);
        matrix operator-  (const matrix &mat);
        matrix operator*  (const matrix &mat);
        matrix operator+  (int scalar);
        matrix operator-  (int scalar);
        matrix operator*  (int scalar);
         bool  operator == (matrix mat);
   bool   operator!= (matrix mat);
   bool isIdentity (const matrix mat);
    bool isSymetric (const matrix mat);
    bool   isSquare   (const matrix mat) ;
    matrix  transpose( const matrix mat);

    void setrow(int r);
    void setcol(int c);

     int getrow(){return row;}
     int getcol(){return col;}


    private:
        int row;
    int col;
    int*data;
};

ostream& operator<< (ostream &out, matrix mat);

#endif // MATRIX_H
