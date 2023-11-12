//
// Created by shaik_shajahan on 12-11-2023.
//
#include <iostream>
#include "MergeSort.h"
using namespace std;
int main(){
    MergeSort *mergeSort = new MergeSort();

    int arr[] = {3,4,1,3,10,100};

    mergeSort->mergeSort(arr, 0, 5);

    for(int i : arr){
        cout<<i<<" ";
    }
}