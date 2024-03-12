// 10101
// 01010
// 10101
// 01010
// 10101
#include<stdio.h>
int main(){
   int count =0;
    for(int i=1;i<=5;i++){
       
       for(int j=1; j<=5 ; j++){
           count++;
            printf("%d ",count%2);
        }
        printf("\n");
    }
}