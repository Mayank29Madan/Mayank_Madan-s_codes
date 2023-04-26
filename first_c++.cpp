#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={1,7,4,3,7,1};
    display(arr,6);
    return 0;
}