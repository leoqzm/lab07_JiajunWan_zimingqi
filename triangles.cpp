// triangles.cpp - more recursive print functions
// Jiajun Wan, Ziming Qi, May 23,2017

#include <iostream>
using namespace std;

// recursively prints n asterisks ('*') on one line to cout
void stars(int n) {
  if(n==0){
    return;}
  if (n==1){
    cout<<'*';
  }
  else {
  cout<<'*';
  stars(n-1);
  }
}

// recursively prints rows of '*', first n, then n-1, ... 1
void triangle(int n) {
  if (n==0){
    return;
  }
  if(n==1){
    stars(n);
    cout << endl;
  }
  else{
    stars(n);
    cout << endl;
    triangle(n-1);
  }
}

// recursively prints rows of '*' in reverse: 1, 2, ... n
void rtriangle(int n) {
  if(n==0){
    return;
  }
  if(n==1){
    stars(n);
    cout<<endl;
  }
  else{
    rtriangle(n-1);
    stars(n);
    cout<<endl;
  }
}

int main() {
    int size;
    cout << "enter size:" << endl;
    cin >> size;
    triangle(size);
    rtriangle(size);

}
