#include<bits/stdc++.h>

using namespace std;

class KthLargest {
public:
    int idx;
    priority_queue<int,vector<int>,greater<int> >pq;
    KthLargest(int k, vector<int>& nums) {
        idx = k;
        int i;
        for(i=0;i<k && i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(i<nums.size()){
            if(pq.top()<nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
            i++;
        }
    }
    
    int add(int val) {
        if(pq.size()<idx){
            pq.push(val);
        }
        else if(pq.top()<val){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};
