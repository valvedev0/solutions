//program for displaying custom copy constructor

#include <cassert>
#include <iostream>
#include <ostream>
using namespace std;

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
          assert(size >= 0);
    if (size != 0) {
      m_ptr = new int[size]{};
      m_size = size;
    }
  }
  IntArray(const IntArray& source) {
    if (! source.IsEmpty()) {
      m_size = source.m_size;

      m_ptr = new int[m_size]{};
    
      for (int i = 0; i < m_size; i++) {
        m_ptr[i] = source.m_ptr[i];
      }
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

ostream& operator<< (ostream& os, const IntArray& a){
    os << "[" ;
    for (int i=0; i < a.Size(); i++)
    { 
        os << a[i] << ' ';

    }
    os << ']';
    return os;
}
int main() {
  using std::cout;

  IntArray a{3};
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  IntArray b = a;
    
  cout << " a = " << a << '\n';
  cout << " b = " << b << '\n';

  b[1] = 100;
  cout << "\n b[1] = 100; \n\n";

  cout << " a = " << a << '\n';
  cout << " b = " << b << '\n';
}