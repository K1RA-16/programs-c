

#import <iostream>
using namespace std;

class complex {
private:
  int real, img;
public:
  complex() {
    real = img = 0;
  }
  complex(int r, int i) {
    real = r;
    img = i;
  }
  void add(int r, complex i) {
      cout<< "test";
    real = r + i.real;
    img = r + i.img;
    cout << "After adding complex number and normal number:\n real: " << real << "\n imaginary: " << img << "i\n";
  }
  void add(complex r, complex i) {
    real = r.real + i.real;
    img = r.img + i.img;
    cout << "After adding two complex numbers:\n real: " << real << "\n imaginary: " << img << "i\n";
  }
};

int main() {
  int r, i, n;
  cout << "Enter a normal number \n";
  cin>> n;
  cout << "Enter Complex Number 1:\nReal:";
  cin >> r;
  cout << "\nImaginary :";
  cin >> i;
  complex comp1(r, i);
  cout << "Enter complex Number 2:\nReal: ";
  cin >> r;
  cout << "\nImaginary :";
  cin >> i;
  complex comp2(r, i);
  
  complex comp3;
  complex comp4;
  comp3.add(n,comp1);
  comp3.add(comp2,comp1);
  return 0;
}
