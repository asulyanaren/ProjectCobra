#include <iostream>

int main() {
   int k;
   std::cin >> k;
   int row=6;
   int col=5;
   int** arr = new int*[row];
   for(int i=0; i<row; i++){
         arr[i] = new int[col];
    }

   for(int i=0; i < row; i++){
     for(int j=0; j < col; j++){
           std::cin >> arr[i][j];
         }
         
      }
  
  
        std::cout<<std::endl;
      delete[] arr[k-1];
      int** tmp = new int*[row-1];
      int tmpI=0;
     for(int i=0; i < row; i++){
          if(i != k-1){
            tmp[tmpI++] = arr[i];
           }
        }
           delete[] arr;
           arr = tmp;
           row = row - 1;
       
         
      std::cout <<std::endl;
    
      for(int i=0;i < row; i++){
        for(int j=0; j < col; j++){
                 std::cout << arr[i][j]<< "  ";     
               }
            std::cout << std::endl;
         }
            
}