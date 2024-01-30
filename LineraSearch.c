#include <stdio.h>

 int main(){
    int num,flag=0;
    int arr[]={10,20,30,40,50,60,70,80,90};   //sample array to search in
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=0;i<9;i++){
        if(arr[i]==num){
            flag=1;
        }
    }

    
    if(flag==1){
        printf("Number found");
    }

    else{
        printf("Number not found");
    }
    
 }