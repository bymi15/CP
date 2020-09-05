#include "../../utils.h"
using namespace std;

// My implementation of std::vector data structure
// Dynamic array structure
template <typename T>
class Vect {
   private:
    size_t cur = 0;
    size_t sz = 2;
    T* arr;

    void resize() {
        size_t new_sz = sz * 2;
        T* newArr = new T[new_sz];
        memcpy(newArr, arr, sz * sizeof(T));
        sz = new_sz;
        delete[] arr;
        arr = newArr;
        cout << "resizing to " << new_sz << endl;
    }

   public:
    Vect() {
        arr = new T[sz];
    }

    Vect(size_t sz) {
        this->sz = sz;
        arr = new T[sz];
    }

    Vect(size_t sz, T val) {
        this->sz = sz;
        arr = new T[sz];
        for(size_t i = 0; i < sz; i++) {
            arr[i] = val;
        }
    }

    void push_back(T x) {
        if(cur >= sz) {
            resize();
        }
        arr[cur++] = x;
    }

    T pop_back() {
        if(cur >= 0 && sz > 0) {
            return arr[cur--];
        } else {
            return NULL;
        }
    }

    size_t size() {
        return cur;
    }

    void print() {
        for(size_t i = 0; i < cur; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vect<char> arr(4);
    arr.push_back('5');
    arr.push_back('6');
    arr.print();
    cout << arr.size() << endl;

    Vect<int> arr2;
    for(int i = 1; i <= 9; i++) {
        arr2.push_back(i);
    }
    cout << arr2.size() << endl;
    arr2.print();
    cout << arr2.pop_back() << endl;
    arr2.print();
}