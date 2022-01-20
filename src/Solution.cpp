#include <iostream>
#include <bitset>

//#include "Solution.h"

using namespace std;

int main(
      int   intc
   ,  char* intv[]
){
   bitset<32> bit_mask = 1;
   bitset<32> binary_val(atoi(intv[1]));

   cout<<endl<<"Program: "<<intv[0];
   cout<<endl<<"intc: "<<intc;
   cout<<endl<<"intv[1]: "<<intv[1];

   cout<<endl<<"Binary representation: "<<binary_val;

   for(
      int index_loop = 0;
          index_loop < 32;
          index_loop ++
   ){
      cout<<endl<<bit_mask;
      bit_mask = bit_mask << 1;
   }

   cout<<endl;
   return 0;
}

