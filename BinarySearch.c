#include <stdio.h>

int main(){
    int num,flag=0;
    int arr[] = { 2, 3, 4, 10, 40 };
    printf("Enter number to search: ");
    scanf("%d",&num);

    int startIndex=0, endIndex=4, middleIndex;

    while(startIndex<=endIndex){
        middleIndex = startIndex+endIndex-1/2;

        if(arr[middleIndex]==num){
            flag=1;
        }

        if(num>arr[middleIndex]){
            startIndex = middleIndex+1;
        }

        else{
            endIndex=middleIndex-1;
        }
    }

    if(flag==1){
        printf("Number found");
    }

    else{
        printf("Number not found");
    }
}