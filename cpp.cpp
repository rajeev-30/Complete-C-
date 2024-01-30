#include <iostream>

template <typename T>
class Number {
public:
  Number(T n){
    num=n;
  }

  T getNum() const {
    return num;
  }

  void printNum() const {
    std::cout << num << std::endl;
  }

private:
  T num;
};

int main() {
  // Create a Number object that stores integers
  Number<int> number(10);
  number.printNum();

  // Create a Number object that stores doubles
  Number<double> number2(3.14);
  number2.printNum();

  return 0;
}
