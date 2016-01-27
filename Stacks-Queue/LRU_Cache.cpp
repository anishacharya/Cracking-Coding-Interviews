/*
 * x.cpp
 *
 *  Created on: Dec 8, 2014
 *      Author: anish
 */

#include <cassert>
#include <iostream>
#include <map>
#include <string>
using namespace std;

template<class K, class V>
class cache
{
private:
	struct Entry
	{
		K key;
		V value;
		Entry *prev;
		Entry *next;
	};

	map<K, Entry*> dict;
	Entry *head, *tail;
	cache(const cache &rhs);
	cache& operator = (const cache &rhs);

	Entry* detach(Entry *entry)
	{
		entry->prev->next = entry->next;
		entry->next->prev = entry->prev;
		return entry;
	}

	void push_front(Entry *entry)
	{
		entry->next = head->next;
		entry->next->prev = entry;
		entry->prev = head;
		head->next = entry;
	}
public:
	cache() : dict()
	{
		head = new Entry();
		tail = new Entry();
		head->next = tail;
		tail->prev = head;
	}

	~cache()
	{
		while(head->next != tail)
		{
			delete detach(head->next);
		}
		delete head;
		delete tail;
	}

	void add(const K &key, const V &value)
	{
		Entry *entry = new Entry();
		entry->key = key;
		entry->value = value;
		push_front(entry);
		dict[key] = entry;
	}

	V& get(const K &key)
	{
		Entry *entry = dict[key];
		// move to head
		detach(entry);
		push_front(entry);
		return entry->value;
	}

	void drop()
	{
		Entry* entry = detach(tail->prev);
		delete entry;
	}

	size_t size()
	{
		size_t size = 0;
		Entry *p = head;
		while(p->next != tail)
		{
			++size;
			p = p->next;
		}
		return size;
	}
};

int main()
{
	cache<string, string> cc;
	cc.add("a", "alpha");
	cc.add("b", "bravo");
	cout << cc.get("a") << endl;
	cc.drop();
	cout << cc.get("a") << endl;
	cout << cc.size() << endl;
	return 0;
}


