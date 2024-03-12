// ***
//  **
//   *
#include<stdio.h>
int main(){

    for(int i=1;i<=3;i++){
      for(int s=1;s<i;s++){
          printf(" ");
      }
      for(int j=3;j>=i;j--){
          printf("*");
      }
       printf("\n");
   }
    return 0;
}