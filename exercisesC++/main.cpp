#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>´´

#include "selectionsort.hpp"
using namespace std;

const string alphabet = "ABCDEFGHJKLMNOPQRSTUVWÄÖÜabcdefghijklmnopqrstuvwxyzäöüß";

//ignore this :D

void callSelectionsort()  {
  int arrToSort[] = {12, 13, 11, 5};
  cout << endl << "I just made my selectionsort algorithm an actual header file." << endl;
  cout << sort(arrToSort) << endl;
}

//exercise 1

void flp1()  {
  int i;
  string s;
  cout << endl;
  for (i = 0; i <= 8; i++)  {
    s += '*';
    cout << s << endl;
  }
}

//exercise 2

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

//exercise 3

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

//exercise 4

void rotate4(int a, int b, int c )  {
  cout << endl << "type R to rotate those numbers : " << endl << a << endl << b << endl << c << endl;
  int buffer;
  buffer = a;
  a = b;
  b = c;
  c = buffer;
  cout << endl << "Press R to rotate or any other key to skip : " << endl;
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

//exercise 5

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
  for (i = 0; i < st.length(); i++) {
    ac = st[i];
    if (ac == s)  {
      pos = i+1;
    }
  }
  cout << endl << "Yout character \'" << c << "\' is on the " << pos << " nd/th position!" << endl;
}

//exercise 6

int cfd6(string s) {
  int returnvalue;
  int i;
  int j;
  bool ischar = false;
  for (i = 0; i < s.length(); i++)  {
    for (j = 0; j < alphabet.length(); j++) {
      if (s[i] == alphabet[j])  {
        ischar = true;
      }
    }
  }
  if (ischar == true) {
    returnvalue = 0;
  }
  else {
    returnvalue = 1;
  }
  return returnvalue;
}

//exercise 7

int arrEquals7(int* a, int* b) {
  int i;
  bool bo;
  for (i = 0; i < 5-1; i++) {
    if (a[i] == b[i]) {
      bo = true;
    }
    else {
      bo = false;
    }
  }
  if (bo == true)  {
    return 1;
  }
  else {
    return 0;
  }
}

//exercise 8

void wrfile8() {
  double x = 3.14159;
  ifstream is;
  ofstream os;

  os.open ("myfile.txt", ofstream::out | ofstream::trunc);

  os << x;

  os.close();

  is.open ("myfile.txt", ifstream::in);

  char c;
  while(is.get(c))
    cout << c;

  is.close();

}

//exercise 9

void counter9() {
  ifstream is;

  is.open ("counter.txt", ifstream::in);
  char numc;
  is.get(numc);

  is.close();

  int numic = (int)numc+1;
  char numcc = (char)numic;

  ofstream os;
  os.open ("counter.txt", ofstream::out | ofstream::trunc);
  os << numcc;
  cout << numcc;
  os.close();
}

//exercise 10 not done yet

void data() {
  ifstream is;
  is.open ("mydata.dat", ifstream::in);
  char c;
  string s;
  int i;
  int j;
  string word;
  stringstream numbers;
  numbers << s;
  string temps;
  int tempi = 0;
  int equals1 = 0;
  while(is.get(c))
    cout << c;
    s += c;
  for (i=0;i<s.length(); i++) {
    for (j=0;j<alphabet.length(); j++)  {
      if (s[i] == alphabet[j])  {
        word += alphabet[j];
      }
    }
  }

}

//main

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
  if (ans == '1')  {
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
  cin.get();

//exercise 6

  cout << endl;
  cout << endl << "so this basically checks if a string you enter does only contain digits." << endl;
  string s;
  cout << endl << "please enter a word for example \'hello\' or an array of digits for example \'1337\' : ";
  cin >> s;
  int re = cfd6(s);
  if (re == 1)  {
    cout << endl << "your string contains only integers so your return-value is 1" << endl;
  }
  else if (re == 0) {
    cout << endl << "your string contains letters so your return-value is 0" << endl;
  }
  else {
    cout << endl << "something went wrong!" << endl;
  }
  cin.get();

//exercise 7

  int arr1[4], arr2[4];
  cout << endl << "this checks if two integer arrays are the same. pls enter for each array 4 digits or numbers." << endl;
  cout << "Enter the first array (4 numbers!) : " << endl;
  cout << "first number : ";
  cin >> arr1[0];
  cout << "second number : ";
  cin >> arr1[1];
  cout << "third number : ";
  cin >> arr1[2];
  cout << "fourth number : ";
  cin >> arr1 [3];
  cout << endl << "Enter the second array (4 numbers!) : ";
  cout << "first number : ";
  cin >> arr2[0];
  cout << "second number : ";
  cin >> arr2[1];
  cout << "third number : ";
  cin >> arr2[2];
  cout << "fourth number : ";
  cin >> arr2[3];
  cout << endl;
  int areEqual = arrEquals7(arr1, arr2);
  if (areEqual == 1)  {
    cout << endl << "your arrays are equal, your return number is 1" << endl;
  }
  else if (areEqual == 0) {
    cout << endl << "your arrays aren't equal, your return number is 0" << endl;
  }
  else {
    cout << endl << "something went wrong!" << endl;
  }
  cout << endl;
  cin.get();
  cin.get();

//exercise 8

  wrfile8();
  cout << endl;
  cin.get();
  cout << endl;

//exercise 9

  counter9();
  cout << endl;
  cin.get();

//exercise 10 not done yet

  data();
  cout << endl;

  return 0;
}
