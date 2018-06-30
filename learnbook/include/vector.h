#include <initializer_list>

namespace learn {
    class Vector {
        private:
            double *elem;
            int sz;
            int len;
        public:
            Vector(int);
            ~Vector();
            Vector(std::initializer_list<double>);
            Vector(const Vector&); // copy constructor
            Vector& operator=(const Vector&); // assignment copy
            void push_back(double);
            double& operator[](int);
            int size() const;
    };
}