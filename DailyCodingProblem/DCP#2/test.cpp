#include <iostream>

//This problem was asked by Uber.

//Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

//For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

//Follow-up: what if you can't use division?

int main()  {
  int ptr2[3];
  int i, j, k;
  int buffer;
  int size = (sizeof(ptr2)/sizeof(ptr2[0]));
  int arr[3];

  for (i = 0; i < 3; i++)  {
    std::cin >> ptr2[i];
  }

  for(i=0; i < 3; i++)  {
    arr[i] = ptr2[i];
  }
  i = 0;
  for (i = 0; i < 3; i++)   {
    for (j = 0; j < 3; j++)  {
      for (k = 0; k < 3; k++) {
        if ((j && k) != i)  {
          ptr2[i] = (arr[j] * arr[k]);
        }
      }
    }
  }
  i = 0;
  for (i = 0; i < 3; i++)  {
    std::cout << ptr2[i] << " ";
  }
}
