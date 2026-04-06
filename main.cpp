#include<iostream>
#include<vector>
#include<span>


#include "sorting/Sorting.h"

int main(){
    std::vector<int> data={6,3,8,95,2,5};
    std::span<int> sdata(data);
    sorting::bubbleSort(data);
    for(auto i:sdata){
        std::cout<<i<<" ";
    }
    return 0;
}