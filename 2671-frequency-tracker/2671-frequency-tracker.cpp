class FrequencyTracker {
private:
    unordered_map<int ,int>mp;
    unordered_map<int ,int>freq;
public:
    FrequencyTracker() {
        
    }
    
    void add(int number) {
        freq[mp[number]]--;
        mp[number]++;
        freq[mp[number]]++;
    }
    
    void deleteOne(int number) {
        // if(mp.find(number)!=mp.end()&&mp[number]>0){
            // mp[number]--;
        // }
    if (mp[number] > 0) {
            freq[mp[number]]--;
            mp[number]--;
            freq[mp[number]]++;
        }
        
    }
    
    bool hasFrequency(int frequency) {
        // for(auto val:mp){
        //     if(val.second==frequency){
        //         return true;
        //     }
        // }
        // return false;
        return freq[frequency]>0;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */