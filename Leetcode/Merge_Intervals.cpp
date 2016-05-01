/*
Given a collection of intervals, merge all overlapping intervals.

For example,
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18].
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:

    static bool mycomp(Interval a, Interval b)
    { 
        return (a.start < b.start); 
    }
    bool check_overlap(Interval a, Interval b)
    {
        if(a.end >= b.start)
            return true;
        return false;    
    }
    vector<Interval> merge(vector<Interval>& intervals)
    {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),mycomp);
        vector<Interval> Output;
        for(int i=0;i<n;i++)
            cout<<intervals[i].start << " "<<intervals[i].end<<endl;
         
        int ix=0;
        if(n==0)
            return Output;
        Output.push_back(intervals[0]);
        ix++;
        
        int i=1;
        
        while(i< n)
        {
            while(check_overlap(Output[ix-1],intervals[i]) == true && i<n)
            {
                Output[ix-1].end=max(intervals[i].end,Output[ix-1].end);
                Output[ix-1].start=min(intervals[i].start,Output[ix-1].start);
                i++;
            }
            if(i<n)
                Output.push_back(intervals[i]);
                ix++; i++;
        }
        return Output;
    }
};
