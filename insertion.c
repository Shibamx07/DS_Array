#include<stdio.h>
#include<stdlib.h>
void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void show(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int insertion(int arr[],int n,int pos,int element){
    if(pos>100){
        return -1;
    }
    else{
        for(int i=n-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=element;
        return 1;
    }
}
int main(){
    int *arr,size;
    arr=(int*)malloc(100*sizeof(int));
    printf("enter the size of array:");
    scanf("%d",&size);
    input_array(arr,size);
    show(arr,size);
    int pos,element;
    printf("enter the postion of insertion:");
    scanf("%d",&pos);
    printf("\nenter the element:");
    scanf("%d",&element);
    insertion(arr,size,pos,element);
    printf("\narray after insertion is:");
    show(arr,size+1);
    return 0;
}