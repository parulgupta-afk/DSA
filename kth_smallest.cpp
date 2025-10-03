

class Solution {
  public:

    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int c: arr){
            pq.push(c);
        }
        
        
        int val;
        while(k>0){
            val = pq.top();
            pq.pop();
            k--;
        }
        return val;
    }
};
