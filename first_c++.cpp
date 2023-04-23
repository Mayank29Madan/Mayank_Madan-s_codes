#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void display_arr-4-2-1(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4,5,6};
    display_arr-4-2-1(arr,6);
    return 0;
}