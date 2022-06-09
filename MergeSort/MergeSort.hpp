//
//  MergeSort.hpp
//  MergeSort
//
//  Created by Marvin Augustin on 6/4/22.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

#endif /* MergeSort_hpp */

class MergeSort{
    public:
    
    void mergeSort(vector<int>&a, int l, int h);
    void merge(vector<int>&a , int low, int high, int mid);
    void popVec(vector<int>&a);
    void print(vector<int>&a);
    
};
