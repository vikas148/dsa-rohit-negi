//sqrt(x) logic
  
int mySqrt(int x){
int start=0, end=x,mid,ans;

while(start<end){
    mid=start+(end-start)/2;

   if(mid*mid==x){
    return mid;
   } 
   else if(mid*mid<x){
    ans=mid;
    start=mid+1;

   }
   else
   end=mid-1;

   return ans
}

}