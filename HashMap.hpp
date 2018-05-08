#ifndef HASHMAP_HPP_
#define HASHMAP_HPP_

#include <iostream>
#include "HashNode.hpp"
using namespace std;

class hashMap {
	friend class makeSeuss;
	hashNode **map; 	// a single dimensional dynamically allocated array of pointers to hashNodes
	string first; 		// for first keyword for printing to a file
	int numKeys;
	int mapSize;
	bool h1; 			// if true, first hash function used, otherwise second hash function is used
	bool c1; 			// if true, first collision method used, otherwise second collision method is used.
	int collisionct1;	// count of original collisions (caused by the hashing function used)
	int collisionct2; 	// count of secondary collisions (caused by the collision handling method used)
public:
	hashMap(bool hash1, bool coll1);

	void addKeyValue(string k, string v);

	int getIndex(string k);

	int calcHash(string k);
	int calcHash2(string k);
	void getClosestPrime();
	void reHash();
	int collHash1(int h,string k);

	int collHash2(int h,string k);

	int findKey(string k);

	void printMap();
};



#endif /* HASHMAP_HPP_ */
