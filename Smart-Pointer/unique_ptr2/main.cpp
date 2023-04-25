#include <iostream>
#include <memory>

using namespace std;

class MyClass {
public:
  explicit MyClass(int value) : value_(value) {}
  int getValue() const { return value_; }
private:
  int value_;
};

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

int main() {
  int arraySize = 5;
  std::unique_ptr<MyClass[]> myArray = make_unique<MyClass[]>(arraySize);

  for (int i = 0; i < arraySize; i++) {
    myArray[i] = MyClass(i);
  }

  for (int i = 0; i < arraySize; i++) {
    std::cout << myArray[i].getValue() << " ";
  }
  std::cout << std::endl;

  return 0;
}
