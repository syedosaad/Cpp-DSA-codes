//BRUTE FORCE

class Solution {
public:
    int maxArea(vector<int>& height) {
        
int currWater = 0, maxWater = 0;

        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                currWater = min(height[i],height[j])*(j-i);
                maxWater = max(maxWater,currWater);
            }
        }
        return maxWater;
    }
};
