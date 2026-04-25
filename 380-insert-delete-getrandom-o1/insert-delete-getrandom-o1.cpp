class RandomizedSet {
public:
    unordered_map<int,int>mp; // for removal to maintain number and their index
    vector<int>vec; // for insertion and get random
    RandomizedSet() {
        
    }
    
    bool insert(int val)
    {
        if(mp.find(val) != mp.end())
        {
            return false;
        }
        vec.push_back(val);
        mp[val] = vec.size()-1; // idx = n-1;
        return true;
    }
    
    bool remove(int val) 
    {
        if(mp.find(val) == mp.end())
        {
            return false;
        }
        int idx = mp[val]; // index of value we want too remove
        int lastelement = vec.back(); // as we swap with the last element we need to store it first
        vec.back() = val;
        vec[idx] = lastelement;
        mp[lastelement] = idx;
        vec.pop_back();
        mp.erase(val);
        return true;
        
    }
    
    int getRandom() 
    {
        int n = vec.size();
        int idx = rand()%n; // return any random idx btw 0 & n
        return vec[idx];
        
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */