// user starting and ending 
// 4---9 
// table print 

#include<stdio.h>
int main(){

printf("enter the starting and ending value you want to start table : ");
int s,e;
scanf("%d %d",&s,&e);

for(int i=s;i<=e;i++){
    for(int j=1;j<=10;j++){
        printf("%d ",i*j);
    }
    printf("\n");
}

  
}