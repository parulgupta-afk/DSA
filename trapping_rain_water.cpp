class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int n = height.size();
        
        int left = 0;
        int right= n-1;

        while(left<right){
            int currentarea = min(height[left],height[right])*(right-left);
            maxi = max(maxi,currentarea);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};
