#include<stdio.h>
#include<stdlib.h>
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int *arr,size;
    arr=(int*)malloc(100*sizeof(int));
    printf("enter the size of the array:");
    scanf("%d ",&size);
    input(arr,size);
    display(arr,size);
    return 0;
}