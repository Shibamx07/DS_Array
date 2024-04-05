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
void insertion(int arr[],int n,int x){
    arr[n]=x;
}
int main(){
    int *arr,size;
    arr=(int*)malloc(100*sizeof(int));
    printf("enter the size of array:");
    scanf("%d",&size);
    input(arr,size);
    int element;
    printf("\nenter the element which is to be inserted at the end:");
    scanf("%d",&element);
    insertion(arr,size,element);
    display(arr,size+1);
    return 0;
}