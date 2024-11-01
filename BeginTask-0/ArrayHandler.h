#include <iostream>
using namespace std;
template<typename T>
class ArrayHandler {
private:
    size_t _size;
    T* _array;
    size_t _point;
    long min_array;
    int max_array;
public:
    ArrayHandler(size_t size = 1000000) {
        _size = size;
        _array = new T[_size];
        _point = 0;
        min_array = 100000000;
        max_array = 0;
    }

    void AppendElem(T elem) {
        _array[_point] = elem;
        

            _point++;

        if (min_array > elem) {
            min_array = elem;
        }

        if (max_array < elem) {
            max_array = elem;
        }
    }

    bool IsContains(T elem) {

        for (int i = 0; i < _size; i++) {
            if (elem == _array[i]) return true;
        }

        return false;
    }

    T GetMax() {
        return max_array;
    }

    T GetMin() {
        return min_array;
    }

    ~ArrayHandler() {
        delete[] _array;
    }

};