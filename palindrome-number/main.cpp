#include <cstdlib>
bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  }

  unsigned int reversed = 0;
  unsigned int temp = x;

  while (temp != 0) {
    reversed = reversed * 10 + temp % 10;
    temp = temp / 10;
  }
  return reversed == x;
}

int main(int argc, char *argv[]) {
  isPalindrome(atoi(argv[1]));
  return 0;
}