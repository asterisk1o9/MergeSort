//
//  main.cpp
//  MergeSort
//
//  Created by Marvin Augustin on 6/4/22.
//

#include <iostream>
#include "MergeSort.hpp"

int main(int argc, const char * argv[]) {
    
    MergeSort testObj;
    
    vector<int>a;
    testObj.popVec(a);
    testObj.print(a);
    
    int low = 0;
    int high = a.size() - 1;
    
    testObj.mergeSort(a, low, high);
    testObj.print(a);
    
    return 0;
}
