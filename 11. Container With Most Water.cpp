class Solution {
public:
    int maxArea(vector<int>& height) {
        
int currWater = 0, maxWater = 0;
int n = height.size();
int lp=0, rp=n-1;

while(lp<rp){
    currWater = min(height[lp],height[rp])*(rp - lp); //water = minimum height * width

    if(height[lp]<height[rp]){
        lp++;   //moving this right as its height is low
    }
    else{
        rp--;   //moving this left as its height is low
    }
    maxWater = max(maxWater,currWater); //Storing the max water value, while travelling throught the array
        }
        return maxWater;
    } 
};
    
