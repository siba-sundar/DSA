#include <stdio.h>


int main(){
    int x,n,p=1,s=0;

    scanf("%d %d",&x,&n);
    int arr[n+1];
    arr[0]=1;

    for(int i=1;i<=n;i++){
        p=p*x;
        arr[i]=p;
    }

    for (int i=0;i<=n;i++){
        s=s+arr[i];
    }
    printf("sum of number :%d ",s);
}