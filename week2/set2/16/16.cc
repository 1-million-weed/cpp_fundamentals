#include <iostream>
using namespace std;

int main() {
string a;
cin >> a;
for (int i = a.size(); i != -1; --i) {                      
  if (((a[i] ^ 128) < 64) && (a[i-3] ^ 240) < 16) {           //a[i]^128 sets the two most
    cout << a[i-3] << a[i-2] << a[i-1] << a[i];               //signifiant bits to 0 <=> 
    i = i - 3;                                                //the byte starts with 10
  } else if (((a[i] ^ 128) < 64) && (a[i-2] ^ 224) < 32) {    //if the first 2 bits are 0
      cout << a[i-2] << a[i-1] << a[i];                       //the byte < 64. a similar 
      i = i - 2;                                              //computation checks whether
  } else if ((a[i] ^ 128) < 64) {                             //the byte 3,2 and 1 position      
      cout << a[i-1] << a[i];                                 //back start with 11110xxx,
      --i;                                                    //1110xxxx or 110xxxxx.
  } else {                                                    //if a utf-8 char is detected,
    cout << a[i];                                             //updates the i according to  
  }                                                           //the code point length.
}
cout << endl;
}   