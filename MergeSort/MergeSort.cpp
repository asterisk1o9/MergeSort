//
//  MergeSort.cpp
//  MergeSort
//
//  Created by Marvin Augustin on 6/4/22.
//

#include "MergeSort.hpp"

void MergeSort::popVec(vector<int>&a){
    
    for(int i = 0; i < 15; i++){
        int nums = rand()%100;
        a.push_back(nums);
    }
}

void MergeSort::print(vector<int>&a){
    for(auto e : a){
        cout << e << " ";
    }
    cout << "\n";
}

void MergeSort::mergeSort(vector<int>&a, int low, int high){
    
    if (low <high){
        
        int mid;
        
        mid = (low + high) / 2;
        
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, high, mid);
    }
    
    return;
}

void MergeSort::merge(vector<int> &a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
