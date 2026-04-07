#include <algorithm>
#include<span>


namespace sorting{
    template <typename T>
    void bubbleSort(std::span<T> data){
        for(size_t i=0;i<data.size()-1;i++){
            for(size_t j=0;j<data.size()-i-1;j++){
            if(data[j]>data[j+1]){
                std::swap(data[j],data[j+1]);
            }
        }
    }
    
    }


    template <typename T>
    void selectionSort(std::span<T> data){
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

    template <typename T>
    void merge(std::span<T> data,std::span<T> left_half, std::span<T> right_half){
        std::vector<T> leftVector(left_half.begin(),left_half.end());
        std::vector<T> rightVector(right_half.begin(),right_half.end());
        
        
        size_t m=0;
        size_t n=0;
        size_t k=0;
        while (m < leftVector.size() && n < rightVector.size()) {
            if (leftVector[m] <= rightVector[n]) {
                data[k++] = std::move(leftVector[m++]);
            } else {
                data[k++] = std::move(rightVector[n++]);
            }
        }

        
        while (m < leftVector.size()) data[k++] = std::move(leftVector[m++]);
        while (n < rightVector.size()) data[k++] = std::move(rightVector[n++]);

    }


    template<typename T>
    void mergeSort(std::span<T> data){
        if(data.size()<=1) return;
        size_t middle = data.size() / 2;
        auto left_half = data.subspan(0, middle);
        auto right_half = data.subspan(middle);
        mergeSort(left_half);
        mergeSort(right_half);
        merge(data,left_half,right_half);
    }

}