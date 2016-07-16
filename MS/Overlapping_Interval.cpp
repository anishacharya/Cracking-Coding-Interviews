#include <iostream>
#include<algorithm>

using namespace std;

class interval
{
    int start;
    int duration;
};

bool myCompare(interval a, interval b)
{
    return a.start<b.start;
}
bool conflict(interval a, int timestamp)
{
    if(a.start <= timestamp && (a.start + a.duration >= timestamp ) )
        return true;
    return false;    
}
int find_first(vector<interval> Calls, int timestamp)
{
    for(int i=Calls.size()-1; i>0 ;i--)
    {
        if(Calls[i].start <= timestamp)
            return i;
    }
    return -1;
}

int find_first_BS(vector<interval> Calls, int timestamp)
{
    int l =0; int r = Calls.size()-1;
    if(Calls[0].start > timestamp) // No timestamp found
        return -1;
    if(Calls[Calls.size()-1].start <= timestamp) // All Intervals Qualify
        return Calls.size()-1;
    while(l<r)
    {
        int mid = l+(r-l)/2;
        if(Calls[mid].start > timestamp) // search left
        {
            r= mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int find_overlapping_calls(vector<interval> Calls , int timestamp)
{
    // first sort based on start time
    // as we know given a instant the possible conflicts would 
    // have start time < instant and end time > instant
    
    sort(Calls.begin(),Calls.end(),myCompare);
    
    // int ix = find_first(Calls, timestamp); ---- O (n)
    int ix = find_first_BS(Calls, timestamp); // --- O(log n) Because Using Binary Search
    if(ix == -1)
        return 0;
    int count = 0;    
    for(int i=ix; i>0; i--)
    {
        if(conflict(Calls[i], timestamp) == true)
            count++;
    }
    return count;
}
// Complexity : 
// No Extra Space
// O(n) + O(n) ~ O(n) ---> If we use Linear Search to find the first Qualifying Ix, using the function
// find_first;
// O(log n) + O(n) ~ O(n) --- > If we Use Binary Search using the function find_first_BS
//
// Once we have the first Qualifying ix it takes linear time to go over them 
// But in general on an avg it will not be O(n)
// So, Optimization to find the ix using Binary Search Makes sense

/// ----- I think a better Performance can be achieved using interval Tree Data Structure
/// But Due to time constraint I did not implement the Interval Tree


