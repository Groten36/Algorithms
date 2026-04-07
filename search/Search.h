#include<span>

namespace search{
    
    template <typename T>
    int binarysearch(std::span<T> data, const T value){
        int left=0;
        int right=data.size()-1;
        while(left<=right){
            int middle=left + (right - left) / 2;
        if(value==data[middle]){
            return middle;}
            else if(value<data[middle]){
                right=middle-1;
            }else{
                left=middle+1;
            }
        
    }
    return -1;

    }

    template <typename T>
    int binarySearchRecursion(std::span<T> data, int left, int right,const T value){
        if(right>=left){
        int middle=left + (right - left) / 2;
        if(data[middle]==value) return middle;

        if(value<data[middle]){
            return binarySearchRecursion(data,left,middle-1,value);
        }else{
            return binarySearchRecursion(data,middle+1,right,value);
        }
    }
        return -1;
    }
}