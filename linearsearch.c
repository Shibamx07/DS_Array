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
void linearsearch(int arr[],int n,int x){
    bool check=false;
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            check=true;
            idx=i;
            break;
        }
    }
    if(check==true){
        printf("the index number of the element %d is: %d",x,idx);
    }
    else{
        printf("the element %d is not present in the array",x);
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
    printf("\nenter the element to be searched:");
    scanf("%d",&element);
    linearsearch(arr,size,element);
    return 0;
}