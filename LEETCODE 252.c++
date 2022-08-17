
//can a person attend all meeting or not
bool canAttendMeetings(vector<vector<int>> &intervals){

   //We have two options either i attend meeting or not
   
     stack<vector<int>> s;
     sort(intervals.begin(),intervals.end());
     s.push(intervals[0]);
     
    for(int i=1;i<intervals.size();i++){
        vector<int> temp=s.top();
        int lastmeetingstart=temp[0];
        int lastmeetingend=temp[1];
        
        int upcomingstart=intervals[i][0];
        int upcomingend=intervals[i][1];
        
        if(upcomingstart>lastmeetingend){
        
            s.pop();
            s.push(intervals[i]) //now further meeting i can attend or not depend on last meeting i am attending
        }
        else{
        
            return false;
        }
        
    }
    
    //yha phoch gye matlb you have attended all meetings
    return true;

}
