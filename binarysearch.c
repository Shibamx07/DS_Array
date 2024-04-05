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
void binarysearch(int arr[],int n,int x){
    int low,mid,high;
    low=0;
    bool check=false;
    int idx;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
    if(arr[mid]==x){
        idx=mid;
        check=true;
    }
    if(arr[mid]>x){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    }
    if(check==true){
        printf("the idex number of the element is :%d",idx);
    }
    else{
        printf("the element is not present in the array");
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
    printf("\nenter the element :");
    scanf("%d",&element);
    binarysearch(arr,size,element);
    return 0;
} 