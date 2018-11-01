#include "matrix.h"
#include<iostream>
using namespace std;

matrix :: matrix (int row, int col, int num[], matrix& mat) /// mat(2,3,data,mat)
    {
        mat.row = row;
        mat.col = col;
        mat.data = new int [row * col]; // mkan el ta5zen
        for (int i = 0; i < row * col; i++)
            data [i] = num [i];
    }

ostream& operator<< (ostream &out, matrix mat)
{
    for (int i = 0; i < mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            cout<< mat.data[i*mat.col+j] << " ";
        }
        cout<< endl;
    }

    return out;
}

matrix matrix:: operator-= (matrix& mat1)
{
// Adding Two matrices
    if (row == mat1.row && col == mat1.col)
    {

        for (int i=0; i<(row*col); i++)
        {
            mat1.data[i] = mat1.data[i] - data[i];      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1 ;
}
matrix matrix :: operator-= (int scalar)
{
    matrix mat1(row,col,data,mat1);
    {
        for (int i=0; i<(row*col); i++)
        {

            mat1.data[i] = mat1.data[i] - scalar;      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1 ;}

    matrix matrix :: operator+= (int scalar)
{
    matrix mat1(row,col,data,mat1);
    {
        for (int i=0; i<(row*col); i++)
        {

            mat1.data[i] = mat1.data[i] + scalar;      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1 ;}




matrix matrix:: operator+= (matrix& mat1)
{
// Adding Two matrices
    if (row == mat1.row && col == mat1.col)
    {

        for (int i=0; i<(row*col); i++)
        {
            mat1.data[i] = mat1.data[i] + data[i];      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1 ;
}


 matrix matrix :: operator -- ( int a)
{

    for(int i=0; i<(col*row); i++)
    {
        data[i]--;
    }
    matrix newMat(row,col,data,newMat);

    newMat.data=new int[newMat.col*newMat.row];
    for(int i=0; i<(col*row); i++)
    {
        newMat.data[i]= data[i];
    }

    return newMat;

}
matrix matrix :: operator ++ (int a)
{
    for(int i=0; i<(col*row); i++)
    {
        data[i]++;
    }
    matrix newMat(row , col, data,newMat);

    newMat.data=new int[newMat.col*newMat.row];
    for(int i=0; i<(col*row); i++)
    {
        newMat.data[i]=data[i];
    }

    return newMat;

}
matrix matrix :: operator+  (const matrix &mat){
    if (row != mat.row || col != mat.col){
		return (*this);}

matrix matt(mat.row,mat.col,data,matt);

	for (int i=0; i<(row*col); i++){
        matt.data[i] = data[i] + mat.data[i];
}
	return matt;
}

matrix matrix :: operator-  (const matrix &mat){
    if (row != mat.row || col != mat.col){
		return (*this);}

matrix matt(mat.row,mat.col,data,matt);


	for (int i=0; i<(row*col); i++){
        matt.data[i] = data[i] - mat.data[i];
}
	return matt;
}

matrix matrix :: operator+  (int scalar){
    matrix mat(row,col,data,mat);

    for(int i=0;i<(row*col);i++){
        mat.data[i] = data[i]+scalar;
    }
return mat;
}

matrix matrix :: operator-  (int scalar){
    matrix mat(row,col,data,mat);

    for(int i=0;i<(row*col);i++){
        mat.data[i]=data[i]-scalar;
    }
return mat;
}

matrix matrix :: operator*  (int scalar){
matrix mat(row,col,data,mat);

    for(int i=0;i<(row*col);i++){
        mat.data[i]=data[i]*scalar;
}
return mat;
}
bool  matrix :: operator == (matrix mat)
{
    if (( row ==  mat.row) && ( col == mat.col ))  //if row not equal colum is not eqyal aready
    {
        for(int i=0; i<row*col; i++)    //to loop for elements
        {
            if(data[i] = mat.data[i])   // i do that to loop for element if i do == do check one elements and out of loop
            {
                return true ;
            }
        }
                  //print one if it true
    }
    else
        return false ;                  //return false if row not equal colum
}
bool  matrix :: operator!= (matrix mat)
{
    if (( row ==  mat.row) && ( col == mat.col ))
    {
        for(int i=0; i<row*col; i++)
        {
            if(data[i] != mat.data[i])
            {
                return false ;
            }
        }

    }
    else
        return true;
}
bool matrix ::isIdentity (const matrix mat){

    matrix mat4(row,col,data,mat4);  //creat new matrix
    if(row == col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)                 //when it identity the postion in colum equal position element in row
                {

                    if(data[j*row+i]!=1)             // all elements in matix shoud becom zero els elements in digram if this not equal 1 retun fals

                        return false;
                }
                else
                {
                    if (data[j*row+i]!=0)      // if elements in matrix expect elemnts in digram not equal zer0 return false these shoud equal zer0
                        return false;
                }
            }
        }
        return true;
    }
    else
        return false;
}
bool matrix ::  isSymetric (const matrix mat)
{
    if(row==col)     //to be symatric shoud  be squahr
    {
        for(int i=0; i<row; i++)   //to loop fpr row
        {

            for(int j=0; j<col; j++) //to loop for colum
            {
                if(data[j*row+i]!=data[i*col+j])         //if elements in row not elemnts of colum retun false  this to be symatric
                {
                    return false;


                }
            }
        }
        return true;
    }

    else
        return false;
}
bool matrix ::  isSquare   (const matrix mat)     //matrix becam squar if colum equal row like 3*3 2*2...and so on
{
    if ( row == col )
    {
        return true ;

    }
    else
        return false ;

}
bool matrix ::  isSymetric (matrix mat)
{
    if(row==col)     //to be symatric shoud  be squahr
    {
        for(int i=0; i<row; i++)   //to loop fpr row
        {

            for(int j=0; j<col; j++) //to loop for colum
            {
                if(data[j*row+i]!=data[i*col+j])         //if elements in row not elemnts of colum retun false  this to be symatric
                {
                    return false;


                }
            }
        }
        return true;
    }

    else
        return false;
}



