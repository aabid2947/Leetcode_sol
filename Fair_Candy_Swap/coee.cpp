#include <vector>
class Solution {
    int sum(vector<int> array){
        int sum = 0;
        for(int  i = 0;i<array.size();i++){
            sum = sum + array[i];
        }
        return sum;
    }
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        std::vector<int> answer(2) ; 
        int sum_of_alice_candies = sum(aliceSizes);
        int sum_of_bob_candies = sum(bobSizes);
        for(int i = 0;i<aliceSizes.size();i++){
            for( int  j = 0;j<bobSizes.size();j++){
                if(sum_of_alice_candies - aliceSizes[i]+bobSizes[j] ==
                sum_of_bob_candies-bobSizes[j] +aliceSizes[i]){
                    answer[0] =  aliceSizes[i];
                    answer[1] =bobSizes[j];
                    return answer;        
                }
            }
        }
        return answer;
        
    }
};