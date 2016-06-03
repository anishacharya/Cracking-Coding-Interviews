// Given a string Re-arrange such that no two repeating ch are adjacent.

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>
#include <string>
#include <map>
using namespace std;

typedef bool (*f)(pair<char,int>,pair<char,int>);
bool compare(pair<char,int>a, pair<char,int> b)
{
   return (a.second < b.second);
}

string shuffle(string s)
{
    string out(s.length(),'0');
    std::priority_queue<pair<char,int>,std::vector<pair<char,int> >, f> pq(compare);
    map<char,int>M;
    for(int i=0;i<s.length();i++)
        M[s[i]]++;
        
    for(map<char,int>::iterator it=M.begin();it!=M.end();it++)
        pq.push(make_pair(it->first,it->second));
    
    int i=0;
    while(!pq.empty())
    {
        int k=pq.top().second;
        char c=pq.top().first;
        //cout<<"i"<<i;
        //cout<<c<<","<<k<<" ";
        int j=i;
        if(i+(k-1)*2>s.length()-1)
        {
            cout<<"not-possible"<<endl;
            return s;
        }
        while(j<=i+(k-1)*2)
        {
            //cout<<"j"<<j<<"char"<<c<<endl;
            cout<<"j="<<j<<",char="<<c<<endl;
            out[j]=c;
            j=j+2;
        }
        pq.pop();
        
        while(out[i]!='0')
            i++;
    }
    return out;
}
void print_string(string s)
{
    for(int i=0;i<s.length();i++)
        cout<<s[i];
}
int main()
{
    string out=shuffle("AAAB");
    print_string(out);
    return 0;
}

