class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int standard = (nums.size()) / 2;        
        map<int, int> times;
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            map<int, int>::iterator iter;
            iter = times.find(*it);
            if (iter == times.end()){ // not appear
                times.insert(make_pair(*it, 1));
            }
            else{
                iter->second++;
            }
        }
        
        int max_time = standard;
        int majority;
        
        for (map<int, int>::iterator it = times.begin(); it != times.end(); it++){
            if (it->second > max_time){
                max_time = it->second;
                majority = it->first;
            }
        }
        
        return majority;
    }
};
