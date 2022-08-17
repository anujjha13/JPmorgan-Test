#include <bits/stdc++.h>
using namespace std;


int helper(int n,vector<int> &scheduleStart,vector<int> scheduleEnd){
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++){
        vector<int> t;
        t.push_back(scheduleStart[i]);
        t.push_back(scheduleEnd[i]);
        intervals.push_back(t);
    }
    
    sort(intervals.begin(),intervals.end());
    
    stack<vector<int>> s;
    s.push(intervals[0]);
    
    for(int i=1;i<intervals.size();i++){
        vector<int> temp=s.top();
        int lastmeetingstart=temp[0];
        int lastmeetingend=temp[1];
        
        int upcomingstart=intervals[i][0];
        int upcomingend=intervals[i][1];
        
        if(upcomingstart>=lastmeetingend){
            s.push(intervals[i]); //now further meeting i can attend or not depend on last meeting i am attending
        }
        
    }
    
    return s.size();
    
    
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    vector<int> scheduleStart,scheduleEnd;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        scheduleStart.push_back(t);
    }
    
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        scheduleEnd.push_back(t);
    }
    int ans=helper(n,scheduleStart,scheduleEnd);
    cout<<ans;
    return 0;
}
