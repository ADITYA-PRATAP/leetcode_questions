class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        int totalwatertrapped=0;
        
        vector<int> right(n);
        vector<int> left(n);
        left[0]=height[0];
        
        
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]=height[n-1];
        for( int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        
        for( int currentBuildingIndex=0;currentBuildingIndex<n;currentBuildingIndex++){
            int currentBuildingHeight=height[currentBuildingIndex];
            
            int currentWaterTrapped=min(left[currentBuildingIndex],right[currentBuildingIndex])-currentBuildingHeight;
            
            totalwatertrapped+=currentWaterTrapped;
        }
        
        return totalwatertrapped;
        
        
    }
};