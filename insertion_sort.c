#include <stdio.h>


int main(){
    int size,j=0,b,s=0;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<size;i++){
        j=arr[i];
        b=i-1;


        while(b>=0 && arr[b]>j){
            arr[b+1]=arr[b];
            b=b-1;
        }
        arr[b+1]=j;
        s=s+1;
    }

    printf("Number of s : %d\n",s);
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}