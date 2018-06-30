#include <iostream>
#include <stdint.h>
#include <assert.h>

template <typename T=char>
class Array2D{
private:
    uint32_t NR;
    uint32_t NC;

    T* m_data;

public:
    Array2D(uint32_t r, uint32_t c){
        NR = r;
        NC = c;

        m_data = new T[r * c];
    }

    ~Array2D(){
        delete [] m_data;
    }

    inline uint32_t row() const { return NR; }
    inline uint32_t col() const { return NC; };

    inline T& operator[] (uint32_t row) {
        return &(m_data[row * NC]);
    }

    inline void operator[] (int row) {
        m_data[row * NC] =  v;
    }

    void clear(const T& value = 0){
        for(uint32_t i = 0; i < NC * NR; i++){
            m_data[i] = value;
        }
    }

    void display(){
        for(uint32_t i = 0; i < NC * NR; i++){
            std::cout << m_data[i];
        }
    }

    int size(){
        return NC * NR;
    };
};


int main(){
    Array2D<int> a(2, 3);
    std::cout << a.size();
    a[0] = 10;
    a.display();
    return 0;
}
