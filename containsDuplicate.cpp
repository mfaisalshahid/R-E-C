bool containsDuplicate(vector<int>& nums) {
    unordered_set <int> setss;
    for(int i = 0 ; i < nums.size() ; i++){
        if(setss.find(nums[i]) != setss.end()) 
            return true;
        else setss.insert(nums[i]);
           }
return false;    
}
