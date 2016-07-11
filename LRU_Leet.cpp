#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
#include <utility>

using namespace std;

template<class K, class V>

class LRUCache
{
    size_t m_capacity;
    unordered_map < K,  list< pair<K,V> >::iterator > m_map; //m_map_iter->first: key, m_map_iter->second: list iterator;
    list<pair<K, V> > m_list;                                //m_list_iter->first: key, m_list_iter->second: value;
    
public:
    LRUCache(size_t capacity):m_capacity(capacity) {}
    
    V& get(const K &key) 
    {
        auto found_iter = m_map.find(key);
        if (found_iter == m_map.end()) //key doesn't exist
            throw "Key Not Found";
        m_list.splice(m_list.begin(), m_list, found_iter->second); //move the node corresponding to key to front
        return found_iter->second->second; 
    }
    
    void set(const K &key, const V &value) 
    {
        auto found_iter = m_map.find(key);
        
        if (found_iter != m_map.end()) //key exists
        {
            m_list.splice(m_list.begin(), m_list, found_iter->second); //move the node corresponding to key to front
            found_iter->second->second = value;                        //update value of the node
            return;
        }
        
        if (m_list.size() == m_capacity) //reached capacity
        {
           int key_to_del = m_list.back().first; 
           m_list.pop_back();            //remove node in list;
           m_map.erase(key_to_del);      //remove key in map
        }
        m_list.emplace_front(key, value);  //create new node in list
        m_map[key] = m_list.begin();       //create correspondence between key and node
    }
};

int main()
{
	cout<<"No errors Compiling"<<endl;	
	return 0;
}
