#include <iostream>

int main() {
   
   // Spiraladzev Array
    const int n = 3;
    int arr[n][n];

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
            std::cin>>arr[i][j];
        }
      }

    
       int len = n;
       int p = 0;
       int i;
       int k=1;
       while(k<=n*n){
      for(i=p; i<len; i++){
           k++;
           std::cout<<arr[p][i]<< " ";
          }
      for(i=p+1;i<len;i++){
            k++;
            std::cout<<arr[i][len-1]<<" ";
           }
      for(i=len-2; i>=p;i--){
            k++;
            std::cout<< arr[len-1][i]<<" ";
      }
      for(i=len-2; i>p; i--){
            k++;
            std::cout<< arr[i][p] << " ";
      }
          p++; len=len-1;
       }
     
}