#include <algorithm>
#include<span>


namespace sorting{
    template <typename T>
    void bubbleSort(std::span<T>& data){
        for(size_t i=0;i<data.size()-1;i++){
            for(size_t j=0;j<data.size()-i-1;j++){
            if(data[j]>data[j+1]){
                std::swap(data[j],data[j+1]);
            }
        }
    }
    
    }


    template <typename T>
    void selectionSort(std::span<T>& data){
        for(size_t i=0;i<data.size()-1;i++){
            auto min=i;
            for(size_t j=i+1;j<data.size();j++){
                if(data[j]<data[min]){
                    min=j;
                }
            }
            std::swap(data[i],data[min]);
        }
    }
}