#include <stdio.h>

int main(){
    /*
    & = AND
    | = OR
    ^ = XOR
    << = left shift
    >> = right shift    
    */


   int x=6;   //6 = 00000110
   int y=12;  //12= 00001100
   int z=0;   //0 = 00000000

   z = x&y;      //z will be 00000100, because only the common set bits are kept in z i.e., 00000100
   printf("Value of z after bitwise 'AND' operation is %d\n",z);

   z = x|y;        //z will be 00001110, because all the set bits from both x and y are kept in z i.e., 000011
   printf("Value of z after bitwise 'OR' operation is %d\n",z);

   z = x^y;        //z will be 00001010, because it gives a  1 wherever there is a difference between x and y
   printf("Value of z after bitwise 'XOR' operation is %d\n",z);

   z  = x<<2;       //shifting x to the left by 2 positions, so z becomes 110 which is 6 in decimal
   printf("Value of z after left shift operation is %d\n",z);

   z = x>>2;       //shifting x to the right by 2 positions, so z becomes 001 which is 1 in decimal
   printf("Value of z after right shift operation is %d\n",z);


   return 0;
}