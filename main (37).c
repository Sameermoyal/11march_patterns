// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>
int main(){
   
    for(int i=1;i<=5;i++){
            int count=0;
       for(int j=1; j<=i ; j++){
            count++;
            printf("%d",count);
        }
        printf("\n");
    }
}