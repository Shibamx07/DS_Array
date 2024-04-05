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
void merge(int arr1[],int arr2[],int marr[],int n1,int n2){
    for(int i=0;i<n1;i++){
        marr[i]=arr1[i];
    }
    for(int i=0,j=n1;i<n2||j<n1+n2;i++,j++){
        marr[j]=arr2[i];
    }
}
void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }      
        }
    }
}

int main(){
    int *arr1,*arr2,*marr,size1,size2;
    arr1=(int*)malloc(100*sizeof(int));
    arr2=(int*)malloc(100*sizeof(int));
    marr=(int*)malloc(100*sizeof(int));
    printf("enter the size of 1st array:");
    scanf("%d",&size1);
    printf("enter the size of 2nd array:");
    scanf("%d",&size2);
    input(arr1,size1);
    display(arr1,size1);
    input(arr2,size2);
    display(arr2,size2);
    merge(arr1,arr2,marr,size1,size2);
    printf("\nmerged array is:");
    display(marr,size1+size2);
    printf("\nthe merged sort array is:");
    sort(marr,size1+size2);
    printf("the merged array after soting is :");
    display(marr,size1+size2);
    return 0;
}