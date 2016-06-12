#include<iostream>                                                                                                                  
#include<list>                                                                                                                      
#include<set>                                                                                                                                    
                                                                                                                                    
using namespace std;                                                                                                                
                                                                                                                                    
class Node                                                                                                                          
{                                                                                                                                   
        std::list<Node*> children;                                                                                                  
};                                                                                                                                  
                                                                                                                                    
class Graph                                                                                                                         
{                                                                                                                                   
        int pathlength=INT_MIN;                                                                                                     
        int shortest_root_to_leaf(Node* root,int pathlength)                                                                        
        {                                                                                                                           
                if(root==NULL)                                                                                                      
                        return -1; // error-- should never come here                                                                
                pathlength++;                                                                                                       
                                                                                                                                    
                if(root.children.size()==0) // if leaf                                                                              
                {                                                                                                                   
                        if(pathlength > min_len)                                                                                    
                                min_len=pathlength;                                                                                 
                }                                                                                                                   
                else                                                                                                                
                {                                                                                                                   
                        list<Node*>::iterator it=root.childern.begin();                                                             
                        while(it!=root.childen.end())                                                                               
                                shortest_root_to_leaf(it,pathlength);                                                               
                }                                                                                                                   
                return pathlength;                                                                                                  
        }                                                                                                                           
                                                                                                                                    
        int shortest_path(Node* root)                                                                                               
        {                                                                                                                           
                if(root==NULL)                                                                                                      
                        return 0;       // Wrong root/ Graph non existent                                                           
                if(root.children.size()==0)                                                                                         
                        return 1;                                                                                                   
                return shortest_root_to_leaf(root,0);                                                                               
        }                                                                                                                           
                                                                                                                                    
};         
