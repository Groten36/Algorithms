#include<iostream>
#include<vector>
#include<span>


#include "sorting/Sorting.h"
#include "search/Search.h"

int main(){
    std::vector<int> data={6,3,8,95,2,5};
    std::span<int> sdata(data);
    sorting::mergeSort(sdata);
    for(auto i:sdata){
        std::cout<<i<<" ";
    }
    //std::cout<<search::binarySearchRecursion(sdata,0,sdata.size()-1,8)<<" ";
    return 0;
}