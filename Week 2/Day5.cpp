/*
  Author:Aryan Yadav
  Insert Delete GetRandom O(1)
  
  Complexity for each operation: O(1)
  Algorithm: Hashing
*/

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int, int>m;
    vector<int> arr;
    int n = 0;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.count(val))
          return false;
        
      m[val] = n++;
      arr.push_back(val);
      return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(!m.count(val))
            return false;
        int index = m[val];
        int last_element = arr.back();
        arr[index] = last_element;
        arr.pop_back();
        n--;
        m[last_element] = index;
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return arr[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
