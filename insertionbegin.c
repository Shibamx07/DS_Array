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
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
}
int main(){
    int *arr,size;
    arr=(int*)malloc(100*sizeof(int));
    printf("enter the size of the array:");
    scanf("%d ",&size);
    input(arr,size);
    display(arr,size);
    int element;
    printf("enter the element which is to be inserted at the beggining:"); 
    scanf("%d",&element); 
    insertion(arr,size,element);
    display(arr,size+1);
    return 0;
}