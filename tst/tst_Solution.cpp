#include <iostream>
#include <bitset>

#include "Solution.h"

using namespace std;

typedef struct{
   int input;
   int expected_output;
}type_stData;

int main(void){

   type_stData atData[] = {
         {0b00000000000000000000000000000001, 0}
      ,  {0b00000000000000000000000000000011, 0}
      ,  {0b00000000000000000000000000000101, 1}
   };

   bool result = 1;

   for(
         long unsigned int index_loop     = 0
      ,                    index_loop_max = sizeof(atData)/sizeof(type_stData);
                           index_loop     < index_loop_max;
                           index_loop     ++
   ){

      int input           = atData[index_loop].input;
      int expected_output = atData[index_loop].expected_output;
      int actual_output   = Solution(atData[index_loop].input);

      if(
            expected_output
         != actual_output
      ){
         cout<<endl;
         cout<<endl<<"Fail - "              <<index_loop;
         cout<<endl<<"Input           : 0b" <<input;
         cout<<endl<<"Expected output : "   <<expected_output;
         cout<<endl<<"Actual   output : "   <<actual_output;
         result = 0;
      }
   }

   if(result){
      cout<<endl<<"All tests passed!";
   }

   cout<<endl;
   return 0;
}

