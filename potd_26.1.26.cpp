

// 1200. Minimum Absolute Difference
// Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.
// Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows
// a, b are from arr
// a < b
// b - a equals to the minimum absolute difference of any two elements in arr

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
          int ans=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            ans=min(ans,arr[i+1]-arr[i]);

        }

        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==ans){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};