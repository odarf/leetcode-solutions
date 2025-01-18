#include <vector>

std::vector<std::vector<int>>
flipAndInvertImage(std::vector<std::vector<int>> &image) {
  uint16_t n = image.size();
  std::vector<std::vector<int>> ans(image);
  for (uint16_t i(0); i < n; i++) {
    for (uint16_t j(0); j < n; j++) {
      ans[i][j] = (image[i][n - j - 1] == 0 ? 1 : 0);
    }
  }
  return ans;
}

int main() {
  std::vector<std::vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
  return 0;
}