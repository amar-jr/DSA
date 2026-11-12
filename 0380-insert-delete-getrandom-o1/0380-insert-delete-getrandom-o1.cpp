#include <bits/stdc++.h>
class RandomizedSet {
public:
    vector<int> value;
    unordered_map<int,int> arr;

    RandomizedSet() {
        
    }
    
    bool search(int val){
        return arr.find(val)!= arr.end();
    }

    bool insert(int val) {
        if(search(val)) return false;

        value.push_back(val);
        arr[val] = value.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(!search(val)) return false;

        auto temp = arr.find(val);

        value[temp->second] = value.back();
        value.pop_back();
        arr[value[temp->second]] = temp->second;
        arr.erase(val);

        return true;

    }
    
    int getRandom() {
        return value[rand()%value.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */