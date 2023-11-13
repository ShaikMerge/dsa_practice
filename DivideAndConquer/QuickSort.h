//
// Created by shaik_shajahan on 13-11-2023.
//

#ifndef DSA_PRACTICE_QUICKSORT_H
#define DSA_PRACTICE_QUICKSORT_H

#include<iostream>
using namespace  std;
class QuickSort {
public: QuickSort(){

        }

        int partition(int arr[], int s, int e){
            //step - 1 Choose a Pivot Element
            int pivotIndex = s;
            int pivotElement = arr[pivotIndex];

            //step - 2 Count elements Less than Pivot Element
            int count  = 0;
            for(int i = s + 1;i<=e;i++){
                if(arr[i] <= pivotElement){
                    count++;
                }
            }

            //Step - 3 Placing the PivotElement in its Correct Position

            int rightIndex = s + count;
            swap(arr[pivotIndex], arr[rightIndex]);
            pivotIndex = rightIndex;

            //Step - 4 Making Sure that The element on the left are smaller than Pivot and Elements to the right are larger


            int i = s;
            int j = e;
            while(i<pivotIndex && j > pivotIndex){
                while(arr[i] <= pivotElement){
                    i++;
                }
                while(arr[j] > pivotElement){
                    j--;
                }

                //After Coming out of this two loops I will have two cases
                // One would be No Swap
                // Swap Required
                if(i < pivotIndex && j > pivotIndex) {     // Doubt to Revist
                    swap(arr[i], arr[j]);
                }

            }

            return pivotIndex;

    }

        void quickSort(int arr[], int s, int e){
                if(s>=e){
                    return;
                }

                //Partition Logic
                int pivot = partition(arr,s , e);

                //Left Call
                quickSort(arr, s, pivot -1);
                //Right Call
                quickSort(arr, pivot + 1, e);
        }

};


#endif //DSA_PRACTICE_QUICKSORT_H
