#include <iostream>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int i, j;
  int ans;
  int size = (sizeof(arr)/sizeof(*arr));

  std::cout << std::endl;

  for (i = 0; i < size; i++)  {
    std::cout << " " << arr[i];
  }

  std::cout << std::endl;
  std::cout << std::endl << "Enter a number which could be summed from the digits of this array. Example = (5) 2 + 3 = 5" << std::endl;
  std::cin >> ans;
  std::cout << std::endl;

  i = 0;

  for (i = 0; i < size; i++)  {
    for (j = 0; j < size; j++ )  {
      if ((i + j) == ans) {
        std::cout << std::endl << std::endl;
        std::cout << i << " + " << j << " == " << ans;
      }
    }
  }

  return 0;
}
