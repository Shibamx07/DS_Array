#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
void delete(int arr[],int n,int x){
    int idx;
    bool check=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            idx=i;
            check=true;
        }
    }
    if(check==true){
        for(int j=idx;j<n;j++){
            arr[j]=arr[j+1];
        }
        for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("the element is not present in array");
    }
}
int main(){
    int *arr,size;
    arr=(int*)malloc(100*sizeof(int));
    printf("enter the size of the array:");
    scanf("%d ",&size);
    input(arr,size);
    display(arr,size);
    int element;
    printf("\nenter the element to be deleted form the array:");
    scanf("%d",&element);
    printf("the after element deletion is :");
    delete(arr,size,element);    
    return 0;
}