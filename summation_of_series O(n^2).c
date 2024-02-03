#include <stdio.h>

int main(){
    int x,n,add=1,p=1;
    scanf("%d %d",&x,&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            p=p*x;
        }

        add=add+p;
        p=1;
   }

   printf("add of Series : %d",add);

}