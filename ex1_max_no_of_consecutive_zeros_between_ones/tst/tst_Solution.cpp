#include <iostream>
#include <bitset>

#include "Solution.h"

using namespace std;

bool result_show = 1;

typedef struct{
   unsigned int input;
   unsigned int expected_output;
}type_stData;

int main(void){

   type_stData atData[] = {
         {0b00000000000000000000000000000001, 0}
      ,  {0b00000000000000000000000000001100, 0}
      ,  {0b00000000000000000000000001010000, 1}
      ,  {0b00000000000000000000001001001101, 2}
      ,  {0b00000000000000000000010001001101, 3}
      ,  {0b00000000000000000001000100001101, 4}
      ,  {0b10000000000000000000000000000001,30}
   };

   bool result_all = 1;

   for(
         long unsigned int index_loop     = 0
      ,                    index_loop_max = sizeof(atData)/sizeof(type_stData);
                           index_loop     < index_loop_max;
                           index_loop     ++
   ){

      int input           = atData[index_loop].input;
      int expected_output = atData[index_loop].expected_output;
      int actual_output   = Solution(atData[index_loop].input);
      bool result_current = (expected_output != actual_output);

      if(
            result_current 
         || result_show
      ){
         bitset<32> b_input(input);

         cout<<endl;
         cout<<endl<<"Test case - "         <<index_loop;
         cout<<endl<<"Input           : 0b" <<b_input;
         cout<<endl<<"Expected output : "   <<expected_output;
         cout<<endl<<"Actual   output : "   <<actual_output;
         cout<<endl<<"Result          : "   <<((result_current)?"FAIL":"PASS");

         if(
               result_current 
            && !result_show
         ){
            result_all = 0;
         }
      }
   }

   if(result_all){
      cout<<endl;
      cout<<endl<<"All tests passed!";
      cout<<endl;
   }

   cout<<endl;
   return 0;
}

