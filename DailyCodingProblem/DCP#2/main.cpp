#include <iostream>
#include <string>

int* ary(int ptr2[5])  {
  int i, j;
  int buffer;
  int size = (sizeof(ptr2)/sizeof(ptr2[0]));
  int arr[5];
  for(i=0; i < 5; i++)  {
    arr[i] = ptr2[i];
  }
  i = 0;
  for (i = 0; i < 5; i++)   {
    buffer = arr[i];
    for (j = 0; j < 5; j++)  {
      ptr2[i] = (arr[i] * arr[j]);
    }
    ptr2[i] = (arr[i] / buffer);
  }
  return ptr2;
}

int main()
{
  int arr[5];
  int i;
  int *ptr2;
  for (i = 0; i < 5; i++)  {
    std::cin >> arr[i];
  }
  ptr2 = arr;
  int *pr = ary(ptr2);
  i = 0;
  for (i = 0; i < 5; i++)  {
    std::cout << pr[i] << " ";
  }
  return 0;
}
