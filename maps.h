#include<iostream>
using namespace std;

template <typename V>

class MapNode {
    public :
     string key;
     V value;
     MapNode* next;
    
    MapNode(string key, V value) {
        this -> key = key;
        this -> value = value;
        next = NULL;

    }

    ~MapNode() {
        delete next;
    }

};
template <typename V>
class ourmap{
    MapNode<v>** buckets;
    int size;
    int numBuckets;

    public :
    ourmap(){
        count = 0 ;
        numBuckets = 5 ;
        buckets  = new MapNode<V>*[numBuckets];
        for(int i = 0 ; i< numBuckets ; i++) {
            buckets[i] = NULL;
        }
        ~ourmap{
            for(int  i= 0; i <numBuckets ; i++){
                delete buckets[i];
            }
            delete buckets[];
        }
    }

};