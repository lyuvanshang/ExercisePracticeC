
#include<iostream>
using namespace std;
int n, k, a[10];
bool check = false;
void display(){

 for (int i = 1; i <= k; i++){
  cout << a[i];
 }
 cout << endl;
}
void nextString(){
 int i = k;
 while (a[i]==n&&i>0){  // n?u a[i] = n và i > 0 th? gi?m i
  i--;
 }
 if (i == 0) check = true; // n?u i = 0 th? ð? ð?n c?u h?nh cu?i cùng 
 else
 {
  a[i]++;     // tãng a[i] lên 1 ðõn v?
  for (int j = i + 1; j <= k; j++){
   a[j] = 1;   // ð?t t?t c? ph?n t? phía sau a[i] = 1
  }

 }
}
void main(){
 cout << " nhap n = ";
 cin >> n;
 cout << " nhap k = ";
 cin >> k;
 for (int i = 1; i <= k; i++){
  a[i] = 1;
 }
 while (!check){
  display();
  nextString();
 }
 system("pause");
}

