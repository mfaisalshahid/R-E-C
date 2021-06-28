int maxSubArray(vector<int>& nums) {
  int currentSubarray = nums[0];
  int maxSubarray = nums[0];

  for (int i = 1; i < nums.size(); i++) {
      int num = nums[i];
  currentSubarray = max(num, currentSubarray + num);
  maxSubarray = max(maxSubarray, currentSubarray);
  }

  return maxSubarray;
}
