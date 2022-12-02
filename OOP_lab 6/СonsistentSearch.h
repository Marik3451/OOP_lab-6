#pragma once
#include <vector>

using namespace std;

template<typename K, typename D>
class ConsistentSearch
{
	vector<pair<K, D>> data;
public:
	ConsistentSearch(vector<pair<K, D>> data);
	D search(K key);
};

template<typename K, typename D>
inline ConsistentSearch<K, D>::ConsistentSearch(vector<pair<K, D>> data)
{
	this->data = data;
}

template<typename K, typename D>
inline D ConsistentSearch<K, D>::search(K key)
{
	for (pair<K, D> element : data) {
		if (element.first == key) {
			return element.second;
		}
	}
	throw string("Not found");
}


