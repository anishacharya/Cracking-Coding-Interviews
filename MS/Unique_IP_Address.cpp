/*Given a list of IP address correspondences, such as 
IP1 = IP2 
IP3 = IP4 
IP3 = IP2 
IP5 = IP6 
IP7 = IP8 
etc. 
Return a list of unique IP addresses. In this case 
IP1, IP5, IP7 
Consider IPs as Strings or any other data type.
*/

#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

set<string>Unique(map<string,string>M)
{
    set<string>Output;
    set<string>Visited;
    set<string>::iterator it0;
    
    for(map<string,string>::iterator it=M.begin();it!=M.end();it++)
    {
        it0=Visited.find(it->first);
        
        if(it0==Visited.end())
        {
            if(Visited.find(it->second) == Visited.end())
            {
                Output.insert(it->first);
                Visited.insert(it->first);
                Visited.insert(it->second);
            }
            else    
            {
                cout <<"deleting: " << it->first<<endl;
		cout << "it ->second is: " << it->second << endl;
		Output.erase(it->first);
		
            }
            
        }
        else
        {
            Visited.insert(it->second);
        }
    }
    return Output;
}
void print_vec(set<string>V)
{
    for(set<string>::iterator i=V.begin();i!=V.end();i++)
        cout<<*i<<endl;
}
int main() 
{
	// your code goes here
	map<string,string>Input;
	Input["IP1"]="IP2";
	Input["IP3"]="IP4";
	Input["IP3"]="IP2";
	Input["IP5"]="IP6";
	Input["IP7"]="IP8";
	//cout<<Input.find("IP1")->second<<endl;
	set<string>Out=Unique(Input);
	print_vec(Out);
	return 0;
}

