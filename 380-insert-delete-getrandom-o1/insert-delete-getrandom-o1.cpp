class RandomizedSet {
public:

    multiset<int> mt;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {

        if(mt.find(val)!=mt.end())
            return false;

        mt.insert(val);

        return true;
    }
    
    bool remove(int val) {

        auto it=mt.find(val);

        if(it==mt.end())
            return false;

        mt.erase(it);

        return true;
    }
    
    int getRandom() {

        int idx=rand()%mt.size();

        auto it=mt.begin();

        advance(it,idx);

        return *it;
    }
};