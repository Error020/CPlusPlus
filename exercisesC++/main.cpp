#include <stdio.h>
#include <string>
#include <iostream>
#include <array>
#include "selectionsort.hpp"
using namespace std;

void callSelectionsort()  {
  int arrToSort[] = {12, 13, 11, 5};
  cout << endl << "I just made my selectionsort algorithm an actual header file." << endl;
  cout << sort(arrToSort) << endl;
}

void flp1()  {
  int i;
  string s;
  cout << endl;
  for (i = 0; i <= 8; i++)  {
    s += '*';
    cout << s << endl;
  }
}

void cal2() {
  cout << endl << "This will take 3 numbers, summing them up, converting them to floatingpoint before dividing them by 3." << endl;
  int in1, in2, in3;
  cout << endl << "Type in 3 Integers or Numbers : " << endl;
  cin >> in1 >> in2 >> in3;
  cout << endl << "approving...";
  cout << endl << "summing up..." << endl << "Sum : ";
  int ou = (in1 + in2 + in3);
  cout << ou;
  cout << endl << "converting...";
  double oux2 = (double)ou;
  cout << endl << "dividing by 3...";
  double re = oux2 / 3.0;
  cout << endl << "Result : " << re;
}

void maxmin3(float ar[]) {
  cout << endl << "This should evaluate an array of floatingpoint-numbers and assign the max and min." << endl;
  float min, max;
  min = 0;
  max = 0;
  int i;
  int j;
  int size = sizeof(ar[0]);
  for (i = 0; i < size+1; i++)  {
    cout << endl << ar[i];
    for (j = 0; j < size+1; j++)  {
      if (ar[i] < ar[j] && ar[i] < min) {
        min = ar[i];
      } else if (ar[i] > ar[j] && ar[i] > max) {
        max = ar[i];
      }
    }
  }
  cout << endl << "max & min: " << endl << max << endl << min << endl;
}

void rotate4(int a, int b, int c )  {
  cout << endl << "type R to rotate those numbers : " << endl << a << endl << b << endl << c << endl;
  int buffer;
  buffer = a;
  a = b;
  b = c;
  c = buffer;
  cout << endl << "continue? R : " << endl;
  char ans1;
  cin >> ans1;
  if (ans1 == 'R' || ans1 == 'r')  {
    rotate4(a, b, c);
    return;
  }
  else  {
    return;
  }
}

void findchar5()  {
  cout << endl << "first write a word and hit ENTER then type which character you want to find in that word : " << endl;
  string st;
  char c;
  int pos;
  cin >> st >> c;
  cout << endl;
  string s;
  string ac;
  s += c;
  int i;
  cout << endl << st << endl;
  for (i = 0; i < st.length(); i++) {
    cout << st[i];
    ac = st[i];
    if (ac == s)  {
      pos = i+1;
    }
  }
  cout << endl << "Yout character \'" << c << "\' is on the " << pos << " nd/th position!" << endl;
}

int main()
{
  char hallo;
  cout << "Continue? [Y/N] : ";
  cin >> hallo;
  if (hallo == 'N' || hallo == 'n') {
    return 0;
  }
  else if (hallo == 'Y' || hallo == 'y') {
    cout << "Succeed!" << endl;
  }
  else  {
    cout << endl << "Only Y or N will do something!" << endl;
    main();
    return 0;
  }

  float ar[5];
  ar[0] = 11.1, ar[1] = 5.3, ar[2] = 7.3, ar[3] = -1.5, ar[4] = -6.5;
  cout << endl;
  cin.get();

//Selectionsort

  callSelectionsort();
  cout << endl << "press ENTER";
  cin.get();

//exercise 1

  flp1();
  cout << endl << "press ENTER ";
  cin.get();

//exercise 2

  cal2();
  cout << endl << "press ENTER ";
  cin.get();
  cin.get();

//exercise 3

  maxmin3(ar);
  cout << endl << "press ENTER ";
  cin.get();

//exercise 4

  int a, b, c;
  a = 12;
  b = 5;
  c = 7;

  char ans;
  cout << endl << "Hit 1 to rotate. Any other answer will skip this function." << endl;
  cin >> ans;
  if (ans = '1')  {
    rotate4(a, b, c);
  }
  else  {
    cout << endl << "This function has been skipped." << endl;
  }
  cout << endl;
  cin.get();

  //exercise 5

  findchar5();
  cout << endl;
  cin.get();

  return 0;
}
