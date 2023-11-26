#include<bits/stdc++.h>

using namespace std;

#define pp pair<double,pair<int,int>>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue< pp,vector<pp>,greater<pp> > pq;
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            pq.push({sqrt((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1])),{arr[i][0],arr[i][1]}});
        }
        while(pq.size()>0 && k--){
            pp p = pq.top();
            pq.pop();
            ans.push_back({p.second.first,p.second.second});
        }
        return ans;
    }
};