#include <iostream>
#include "matrix.h"


using namespace std;





int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};
    int data4 [] = {1,0,0,0,1,0,0,0,1};


    matrix mat1 (4, 2, data1, mat1);
    matrix mat2 (2, 3, data2, mat2);
    matrix mat3(4, 2, data3, mat3);
    matrix mat4 (3,3,data4,mat4);

    cout<< "Matrix 1 is :"<< endl;
    cout << mat1 << endl;
    cout<< "Matrix 2 is :"<< endl;
    cout << mat2 << endl;
   // cout<< "Matrix 3 is :"<< endl;
   // cout << mat3 << endl;
  //  cout<< "Matrix 4 is :"<< endl;
   // cout<< mat4<< endl;
///cout<< "The addition of two matrices 3 and 3 is : " << endl<< (mat1 += mat3) << endl;
     /// cout<< "opp-= is : " << endl<< (mat1 -= mat3) << endl;

 ///cout <<" mat1-- is =  " <<endl<<(mat1--)<<endl;
/// cout <<" mat1++ is =  " <<endl<<(mat1++)<<endl;
/// cout << (mat2+=1)<<endl;
///cout << (mat2-=1)<<endl;



  /// cout << "The addition of two matrices 1 and 3 is :" << endl<< (mat1 + mat3) << endl;
  ///cout << "The addition of two matrices 3 and 3 is :" << endl<< (mat3 + mat3) << endl;
  /// cout << "The differance of two matrices is :"        << endl<< (mat3 - mat1) << endl;
  /// cout<< "Addition scalar is :"       << endl << mat1.operator+(2) << endl;
  ///cout<< "Diffirance scalar is :"     << endl << mat1.operator-(1) << endl;
  ///cout<< "Multiplication scalar is :" << endl << mat1.operator*(2) << endl;



  ///cout << (mat1 == mat3)<< endl;
///cout<< (mat1!= mat3)<<endl ;
//cout << isSymetric(mat4)<<endl;
// cout<< "identity = "<< endl << isIdentity(mat4) <<endl;
//cout<< "squ = "<<endl<< isSquare (mat1)<<endl;
//cout<< "trasnpose =  "<<endl<< transpose(mat5) ;


    return 0;
}
