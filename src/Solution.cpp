int Solution(int N){
   int count_max_zeros=0, count_zeros=0, mask=1;
   bool enable_count=0;
   for(
      int index_loop=0; index_loop<32; index_loop++){
      if(N&mask){
         if(count_zeros>count_max_zeros)count_max_zeros=count_zeros;
         count_zeros=0;
         enable_count=1;
      }
      else{
         if(enable_count)count_zeros++;
      }
      mask=mask<<1;
   }
   return count_max_zeros;
}

