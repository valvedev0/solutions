// Array6.cpp -- Array implementation with bounds checking

#include <cassert>
#include <iostream>

class IndexOutOfBoundsException{};// a class which is used for bounds checking

class IntArray {
 private:
  int* m_ptr{nullptr};
  int  m_size{0}; // the pointer and size variable defines the initial state of array

  bool IsValidIndex(int index) const {
    return (index >= 0) && (index < m_size);
  }

 public:
  IntArray() = default;

  explicit IntArray(int size) {
        
    if (size != 0) {
      m_ptr = new int[size]{};
      m_size = size;
    }
  }
 
  ~IntArray() {
    delete[] m_ptr;
  }

  int Size() const {
    return m_size;
  }

  bool IsEmpty() const {
    return (m_size == 0);
  }

  int& operator[](int index)  // a overload which handles external access to internal elements and a ref. is given to riginal array members
  {
    if (!IsValidIndex(index)) {
      throw IndexOutOfBoundsException{};
    }

    return m_ptr[index];
  }

  int operator[](int index) const { // handles the case where const verifies that the given member of read only.
    if (!IsValidIndex(index)) {
      throw IndexOutOfBoundsException{};
    }

    return m_ptr[index];
  }
};

int main() {
  using std::cout;
  using std::cin;

  try {
    IntArray a{10};
    for (int i = 0; i < a.Size(); i++) {
      a[i] = (i+1)*10;
    }
    
    cout << " Array elements: ";
    for (int i = 0; i < a.Size(); i++) {
      cout << a[i] << ' ';
    }
    cout << '\n';

    cout << " Array size is " << a.Size() << "\n";
    cout << " Please enter an array index: ";
    int index{};
    cin >> index;

    cout << " The element at index " << index << " is " << a[index] << '\n';

  } catch (const IndexOutOfBoundsException& e) {
    cout << "\n *** ERROR: Invalid array index!! \n";
  }
}
