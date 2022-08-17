//Link:https://www.interviewbit.com/problems/meeting-rooms/

#include<bits/stdc++.h>

int Solution::solve(vector<vector<int> > &A) {
    
     vector<pair<int,int>> arr;
        for(int i=0;i<A.size();i++){
            pair<int,int> t;
            t.first=A[i][0];
            t.second=A[i][1];
            arr.push_back(t);
        }
        sort(arr.begin(),arr.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(pq.empty()){
                pq.push(arr[i].second);
                ans++;
            }
            else{
                if(arr[i].first<pq.top()){
                    ans++;
                    pq.push(arr[i].second);
                }
                else{
                    pq.pop();
                    pq.push(arr[i].second);
                }
            }
        }
        
        return ans;
        
}

