#include <vector>

std::vector<int> buildArray(std::vector<int> &nums) {
  uint16_t n = nums.size();
  std::vector<int> ans(n);
  for (uint16_t i(0); i < n; i++) {
    ans[i] = nums[nums[i]];
  }
  return ans;
}

int main() {
  std::vector<int> nums = {5, 0, 1, 2, 3, 4};
  buildArray(nums);
  return 0;
}